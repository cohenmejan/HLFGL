#!/usr/bin/env python3

# generates include/HLFGLDefinitions.h

import xml.etree.ElementTree as etree
from urllib.request import urlopen
from pathlib import Path

GL_XML_URL = "https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/main/xml/gl.xml"
HEADER_PATH = "include/HLFGL/GLDefinitions.h"

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

class GLVersionData:
    def __init__(self):
        self.versionText = ""
        self.version = (0, 0)
        self.constants = []
        self.functions = []

def format_params(params):
    return f"({", ".join(f"{param.type} {param.name}" for param in params)})"

print("downloading gl.xml ...")

tree = etree.parse(urlopen(GL_XML_URL))

constantTable = {}
for enum in tree.findall("enums/enum"):
    constantTable[enum.get("name")] = enum

commandTable = {}
for command in tree.findall("commands/command"):
    proto = command.find("proto")
    commandTable[proto.find("name").text] = command

typedefs = []
for typeData in tree.findall("types/type"):
    if typeData.text is None:
        continue

    typeName = ''.join(typeData.itertext())
    typedefs.append(typeName)

versions = []
definedNames = []

for feature in tree.findall("feature"):
    api = feature.get("api")
    if api != "gl":
        continue

    featureName = feature.get("name")
    if not featureName.startswith("GL_VERSION_"):
        continue

    versionData = GLVersionData()
    versionData.versionText = featureName.split("GL_VERSION_")[1]
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
        text = proto.itertext()

        function = FunctionDefinition()
        function.return_type = "void" if proto.text is None else ''.join(s for s in text if s != name).strip()
        function.name = name

        for paramData in functionData.findall("param"):
            param = Param()
            param.name = paramData.find("name").text.strip()
            param.type = ''.join(s for s in paramData.itertext() if s != param.name).strip()
            function.params.append(param)

        versionData.functions.append(function)

    versions.append(versionData)

output = '''// generated

#pragma once

'''

output += f"{"\n".join(typedefs)}\n"
    
for versionData in versions:
    for constant in versionData.constants:
        output += f"\n#define {constant.name} {constant.value}"

output += "\n\nnamespace HLF::GL {"

for versionData in versions:
    for function in versionData.functions:
        pfnName = f"PFN_{function.name}"
        output += f"\n\ttypedef {function.return_type}(*{pfnName}){format_params(function.params)};"
        output += f"\n\tinline PFN_{function.name} fn_{function.name} {{}};"

output += f"\n\n\tinline void LoadFunctionPointers(Version initVersion = GetVersion(), PFN_GetProcAddress proc = GetProcAddress) {{"

for versionData in versions:
    output += f"\n\t\tif (initVersion >= Version {{{versionData.version[0]}, {versionData.version[1]}}}) {{"
    for function in versionData.functions:
        output += f"\n\t\t\tfn_{function.name} = (PFN_{function.name})proc(\"{function.name}\");"
    output += "\n\t\t}\n\t\telse return;\n"
output += "\t}\n}"

output += "\n"
for versionData in versions:
    for function in versionData.functions:
        body = f"return HLF::GL::fn_{function.name}({', '.join(param.name for param in function.params)});"
        output += f"\ninline {function.return_type} {function.name}{format_params(function.params)} {{ {body} }}"


path = Path(HEADER_PATH)
path.parent.mkdir(parents=True, exist_ok=True)
path.write_text(output)

print(f"{HEADER_PATH} generated")