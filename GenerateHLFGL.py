# generates include/HLFGLDefinitions.h

GL_VERSION = (4, 6)
HEADER_PATH = "include/HLFGL/GLDefinitions.h"

GL_XML_URL = "https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/main/xml/gl.xml"
EGL_XML_URL = "https://raw.githubusercontent.com/KhronosGroup/EGL-Registry/main/api/egl.xml"

import xml.etree.ElementTree as etree
from urllib.request import urlopen
from pathlib import Path

class ConstantDefinition:
    def __init__(self):
        self.name = ""
        self.value = ""

class Param:
    def __init__(self):
        self.type = ""
        self.name = ""

class FunctionDefinition:
    def __init__(self):
        self.return_type = ""
        self.name = ""
        self.params = []
        self.formattedParams = ""

class VersionData:
    def __init__(self):
        self.versionText = ""
        self.version = (0, 0)
        self.constants = []
        self.functions = []

class TypedefData:
    def __init__(self):
        self.name = ""
        self.value = ""
        self.requires = ""

def generate_api(api_prefix, api_name, xml_url):
    print(f"downloading {api_prefix} xml ...")
    tree = etree.parse(urlopen(xml_url))

    typedefs = []
    versions = []
    definedNames = []

    typesTable = {}
    for typeData in tree.findall("types/type"):
        name = typeData.get("name")
        if name is None:
            name = typeData.find("name").text
            if name is None:
                continue

        typedef = TypedefData()
        typedef.name = name.strip()
        typedef.value = ''.join(typeData.itertext()).strip()
        typedef.requires = typeData.get("requires")
        typedef.requires = typedef.requires.strip() if typedef.requires is not None else None

        typesTable[name] = typedef

    constantTable = {}
    for enum in tree.findall("enums/enum"):
        constantTable[enum.get("name")] = enum

    commandTable = {}
    for command in tree.findall("commands/command"):
        proto = command.find("proto")
        commandTable[proto.find("name").text] = command

    def addTypedef(name):
        if name is None or name in definedNames:
            return
        definedNames.append(name)

        value = typesTable.get(name)

        if value is not None and value.requires is not None:
            addTypedef(value.requires)

        if value.value is None or len(value.value) == 0:
            return

        typedefs.append(value)
    # /addTypedef

    versionPrefix = f"{api_prefix}_VERSION_"

    for feature in tree.findall("feature"):
        api = feature.get("api")
        if api != api_name:
            continue

        featureName = feature.get("name")

        if not featureName.startswith(versionPrefix):
            continue

        versionData = VersionData()
        versionData.versionText = featureName.split(versionPrefix)[1]
        versionData.version = (int(versionData.versionText.split("_")[0]), int(versionData.versionText.split("_")[1]))

        for constantNameData in feature.findall("require/enum"):
            name = constantNameData.get("name")
            if name in definedNames:
                continue
            definedNames.append(name)

            constantData = constantTable.get(name)
            value = constantData.get("value")

            constant = ConstantDefinition()
            constant.name = name
            constant.value = value
            versionData.constants.append(constant)

        for command in feature.findall("require/command"):
            name = command.get("name")
            if name in definedNames:
                continue
            definedNames.append(name)

            functionData = commandTable.get(name)
            proto = functionData.find("proto")
            ptype = proto.find("ptype")
            text = proto.itertext()

            function = FunctionDefinition()

            if ptype is not None and ptype.text is not None:
                addTypedef(ptype.text.strip())

            if proto.text is not None:
                function.return_type += ''.join(s for s in text if s != name).strip()
            elif ptype is not None and ptype.text is not None:
                function.return_type = ptype.text.strip()
            else:
                function.return_type = "void"

            function.name = name

            for paramData in functionData.findall("param"):
                param = Param()
                param.name = paramData.find("name").text.strip()
                param.type = ''.join(s for s in paramData.itertext() if s != param.name).strip()
                function.params.append(param)

                param_ptype = paramData.find("ptype")
                if param_ptype is not None and param_ptype.text is not None:
                    addTypedef(param_ptype.text)

            function.formattedParams = f"({", ".join(f"{param.type} {param.name}" for param in function.params)})"
            versionData.functions.append(function)

        versions.append(versionData)

    defineTag = f"HLFGL_ENABLE_{api_prefix}"
    output = f"\n\n#if {defineTag}"

    output += f"\n\nextern \"C\" {{"
    for typedef in typedefs:
        if typedef is not None and typedef.value is not None:
            output += f"\n\t{typedef.value}"
    output += "\n}\n"

    for versionData in versions:
        for constant in versionData.constants:
            output += f"\n#define {constant.name} {constant.value}"

    output += f"\n\nnamespace HLF::GL {{"

    for versionData in versions:
        for function in versionData.functions:
            fnTypeName = f"Fn_{function.name}"
            output += f"\n\ttypedef {function.return_type}(*{fnTypeName}){function.formattedParams};"
            output += f"\n\tinline {fnTypeName} s_fn_{function.name} {{}};"

    output += f"\n\n\tinline void {api_prefix}LoadFunctionPointers(Version initVersion, Fn_GetProcAddress proc) {{"

    for versionData in versions:
        if len(versionData.functions) == 0:
            continue

        output += f"\n\t\tif (initVersion >= Version {{{versionData.version[0]}, {versionData.version[1]}}}) {{"
        for function in versionData.functions:
            output += f"\n\t\t\ts_fn_{function.name} = (Fn_{function.name})proc(\"{function.name}\");"
        output += "\n\t\t}\n\t\telse return;\n"
    output += "\t}\n}"

    output += "\n\nextern \"C\" {"
    for versionData in versions:
        for function in versionData.functions:
            body = f"return HLF::GL::s_fn_{function.name}({', '.join(param.name for param in function.params)});"
            output += f"\n\tinline {function.return_type} {function.name}{function.formattedParams} {{ {body} }}"

    output += f"\n}}\n\n#endif // {defineTag}"
    return output

output = "// generated\n\n#pragma once"
output += generate_api("GL", "gl", GL_XML_URL)
output += generate_api("EGL", "egl", EGL_XML_URL)

path = Path(HEADER_PATH)
path.parent.mkdir(parents=True, exist_ok=True)
path.write_text(output)

print(f"{HEADER_PATH} generated")