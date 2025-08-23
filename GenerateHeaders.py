# generates include/HLFGLDefinitions.h

HEADER_PATH = "include/HLFGL/"

GL_XML_PATH = "registries/gl.xml"
EGL_XML_PATH = "registries/egl.xml"

import GeneratorConfig as config
import xml.etree.ElementTree as etree
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
        self.formatted_params = ""

class TypedefData:
    def __init__(self):
        self.name = ""
        self.definition = ""
        self.requires = ""

def generate_api(api_prefix, api_name, api_version, api_extensions, xml_path):
    # all definition trees
    typedefs_table = {}
    constants_table = {}
    functions_table = {}

    # definitions in api
    defined_names = []
    api_typedefs = []
    api_constants = []
    api_functions = []

    output = "\nextern \"C\" {"

    print(f"generating header for {api_prefix}...")
    root = etree.parse(xml_path)

    for typedef_entry in root.findall("types/type"):
        if typedef_entry in typedefs_table: continue
        name = typedef_entry.get("name")
        if name is None: name = typedef_entry.find("name").text
        if name is None: continue
        name = name.strip()
        typedefs_table[name] = typedef_entry

    for constant_entry in root.findall("enums/enum"):
        if constant_entry in constants_table: continue
        name = constant_entry.get("name")
        if name is None: name = constant_entry.find("name").text
        if name is None: continue
        name = name.strip()
        constants_table[name] = constant_entry

    for function_entry in root.findall("commands/command"):
        if function_entry in functions_table: continue
        name = function_entry.find("proto/name").text
        if name is None: continue
        name = name.strip()
        functions_table[name] = function_entry

    def generate_api_tree(tree, tree_name):
        typedefs = []
        constants = []
        functions = []

        def add_typedef(typedef):
            if typedef is None or typedef.name in defined_names or typedef in api_typedefs: return
            defined_names.append(typedef.name)
            api_typedefs.append(typedef)
            typedefs.append(typedef)

        def create_typedef(name):
            if name is None or len(name) == 0: return None
            typedef_tree = typedefs_table.get(name)
            if typedef_tree is None: return None
            typedef = TypedefData()
            typedef.name = name
            typedef.definition = ''.join(typedef_tree.itertext()).strip()
            typedef.requires = typedef_tree.get("requires")

            if typedef.requires is not None:
                typedef.requires = typedef.requires.strip()
                add_typedef(create_typedef(typedef.requires))

            add_typedef(typedef)
            return typedef

        def add_constant(constant):
            if constant is None or constant.name in defined_names or constant in api_constants: return
            defined_names.append(constant.name)
            api_constants.append(constant)
            constants.append(constant)

        def create_constant(name):
            if name is None or len(name) == 0: return None
            constant_tree = constants_table.get(name)
            constant = ConstantDefinition()
            constant.name = name
            constant.value = constant_tree.get("value")
            add_constant(constant)
            return constant

        def add_function(function):
            if function is None or function.name in defined_names or function in api_functions: return
            defined_names.append(function.name)
            api_functions.append(function)
            functions.append(function)

        def create_function(name):
            if name is None or len(name) == 0: return None
            function_tree = functions_table.get(name)
            function = FunctionDefinition()
            function.name = name

            proto = function_tree.find("proto")
            ptype = proto.find("ptype")
            text = proto.itertext()

            function.return_type = ""
            if proto.text is not None: function.return_type = ''.join(s for s in text if s != name).strip()
            elif ptype is not None and ptype.text is not None: function.return_type = ptype.text.strip()
            else: function.return_type = "void"

            if ptype is not None and ptype.text is not None: create_typedef(ptype.text)

            for param_tree in function_tree.findall("param"):
                param_name = param_tree.find("name").text.strip()
                param_type = param_tree.find("ptype")
                if param_type is not None and param_type.text is not None: create_typedef(param_type.text)

                param = Param()
                param.name = param_name
                param.type = ''.join(s for s in param_tree.itertext() if s != param.name).strip()
                function.params.append(param)

            function.formatted_params = f"({", ".join(f"{param.type} {param.name}" for param in function.params)})"

            add_function(function)
            return function

        # get defs

        for typedef_entry in tree.findall("type"):
            create_typedef(typedef_entry.get("name"))

        for constant_entry in tree.findall("enum"):
            create_constant(constant_entry.get("name"))

        for function_entry in tree.findall("command"):
            create_function(function_entry.get("name"))

        # append to output

        output = f"\n\n// {tree_name}\n"
        output += f"#ifndef {tree_name}"
        output += f"\n#define {tree_name} 1"

        for typedef in typedefs:
            if typedef is None or typedef.definition is None or len(typedef.definition) == 0: continue
            output += f"\n{typedef.definition}"

        for constant in constants:
            if constant is None: continue
            output += f"\n#define {constant.name} {constant.value}"

        if len(functions) != 0:
            output += "\nnamespace HLFGL {"
            for function in functions:
                if function is None: continue
                fn_typename = f"Fn_{function.name}"
                output += f"\n\ttypedef {function.return_type}({api_prefix}APIENTRY *{fn_typename}){function.formatted_params};"
                output += f"\n\tinline {fn_typename} s_fn_{function.name} {{}};"
            output += "\n}"

        for function in functions:
            if function is None: continue
            body = f"return HLFGL::s_fn_{function.name}({', '.join(param.name for param in function.params)});"
            output += f"\ninline {function.return_type} {function.name}{function.formatted_params} {{ {body} }}"

        output += f"\n#endif // {tree_name}\n"
        return output

    for feature in root.findall("feature"):
        api = feature.get("api")
        if api != api_name: continue
        name = feature.get("name")

        version_parts = name.split("_")[-2:]
        version = (int(version_parts[0]), int(version_parts[1]))
        if api_version[0] < version[0] or (api_version[0] == version[0] and api_version[1] < version[1]): continue

        requirements = feature.find("require")
        if requirements is None: continue
        output += generate_api_tree(feature.find("require"), name)

    for extension in root.findall("extensions/extension"):
        name = extension.get("name")
        if name not in api_extensions: continue
        requirements = extension.find("require")
        if requirements is None: continue
        output += generate_api_tree(extension.find("require"), name)

    output += f"\nnamespace HLFGL {{\n\tinline void {api_prefix}InitFunctionPointers(Fn_GetProcAddress proc) {{\n"
    for function in api_functions:
        output += f"\t\ts_fn_{function.name} = (Fn_{function.name})proc(\"{function.name}\");\n"
    output += "\t}\n}\n}"

    return output

def write(content, name):
    path = Path(HEADER_PATH + name)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(content)
    print(f"{HEADER_PATH}{name} generated")

header = "// generated\n\n#pragma once"
if config.GL_ENABLED: write(header + generate_api("GL", "gl", config.GL_CORE_VERSION, config.GL_EXTENSIONS, GL_XML_PATH), "GLDefinitions.h")
if config.EGL_ENABLED: write(header + generate_api("EGL", "egl", config.EGL_CORE_VERSION, config.EGL_EXTENSIONS, EGL_XML_PATH), "EGLDefinitions.h")

print(f"files generated")