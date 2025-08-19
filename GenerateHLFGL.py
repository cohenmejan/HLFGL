#!/usr/bin/env python3

# generates include/HLFGLDefinitions.h

import xml.etree.ElementTree as ET
from urllib.request import urlopen
from pathlib import Path

GL_XML_URL = "https://raw.githubusercontent.com/KhronosGroup/OpenGL-Registry/main/xml/gl.xml"
HEADER_PATH = "include/HLFGLDefintions.h"
TARGET_VERSION = (4, 6)

def parse_gl_xml():
    print("downloading gl.xml ...")

    xml_content = {}
    with urlopen(GL_XML_URL) as response:
        xml_content = response.read().decode('utf-8')

    print("gl.xml downloaded")

    root = ET.fromstring(xml_content)
    cmd_min_version = {}

    # version requirements
    for feature in root.findall(".//feature"):
        name = feature.get("name", "")
        if not name.startswith("GL_VERSION_"):
            continue

        version_str = name.replace("GL_VERSION_", "").replace('_', '.')
        try:
            major, minor = map(int, version_str.split('.'))
        except ValueError:
            continue

        for cmd in feature.findall(".//command"):
            cmd_name = cmd.get("name")
            if cmd_name and cmd_name not in cmd_min_version:
                cmd_min_version[cmd_name] = (major, minor)

    # function signatures
    functions = []
    for command in root.findall(".//commands/command"):
        proto = command.find("proto")
        name_elem = proto.find("name") if proto is not None else None

        if name_elem is None or not name_elem.text.startswith("gl"):
            continue

        name = name_elem.text.strip()

        # return type
        proto_texts = [t.strip() for t in proto.itertext() if t.strip()]
        return_type = " ".join(proto_texts[:-1]) if len(proto_texts) >= 2 else "void"

        # parameters
        params = []
        for param in command.findall("param"):
            param_name_elem = param.find("name")
            if param_name_elem is None:
                continue

            param_name = param_name_elem.text.strip()
            param_texts = [t.strip() for t in param.itertext() if t.strip()]
            param_type = " ".join(t for t in param_texts if t != param_name).strip()
            params.append((param_type, param_name))

        # only include functions within target version
        min_ver = cmd_min_version.get(name)
        if min_ver and min_ver <= TARGET_VERSION:
            functions.append({
                "name": name,
                "return_type": return_type,
                "params": params,
                "min_version": min_ver
            })

    return functions

def format_params(params, names_only=False):
    if not params:
        return "" if names_only else "void"

    if names_only:
        return ", ".join(name for _, name in params)
    return ", ".join(f"{ptype} {name}" for ptype, name in params)

def generate_header(functions):
    typedefs = [
        f"\tusing PFN_{func['name']} = {func['return_type']}(*)({format_params(func['params'])});"
        for func in functions
    ]

    pointers = [f"\tinline PFN_{func['name']} _{func['name']} {{}};" for func in functions]

    version_groups = {}
    for func in functions:
        version = func["min_version"]
        version_groups.setdefault(version, []).append(func)

    tables = []
    table_entries = []

    for version in sorted(version_groups.keys()):
        major, minor = version
        table_name = f"glFnTable_{major}_{minor}"

        entries = [f'\t\t{{ "{func["name"]}", (void**)&_{func["name"]} }},'
                   for func in version_groups[version]]

        tables.append(f"\n\tstatic const FnEntry {table_name}[] = {{\n{'\n'.join(entries)}\n\t}};")
        table_entries.append(f"\t\t{{ Version {{{major}, {minor}}}, {table_name}, {len(entries)} }},")

    wrappers = []
    for func in functions:
        ret = func['return_type']
        params_decl = format_params(func['params'])
        param_names = format_params(func['params'], names_only=True)

        wrapper = f"inline {ret} {func['name']}({params_decl}) {{ "
        if ret != "void":
            wrapper += "return "
        wrapper += f"HLF::GL::_{func['name']}({param_names}); }}"
        wrappers.append(wrapper)

    return f"""// generated

#pragma once

#include <GL/gl.h>

namespace HLF::GL {{
{'\n'.join(typedefs)}
    
{'\n'.join(pointers)}
{'\n'.join(tables)}

    static const FuncTableGroup glFuncGroups[] = {{
{'\n'.join(table_entries)}
    }};
}}

{'\n'.join(wrappers)}
"""

if __name__ == "__main__":
    functions = parse_gl_xml()
    print(f"found {len(functions)} functions for versions 1.0 - {TARGET_VERSION[0]}.{TARGET_VERSION[1]}")

    Path(HEADER_PATH).parent.mkdir(parents=True, exist_ok=True)

    with open(HEADER_PATH, "w", newline="\n") as f:
        f.write(generate_header(functions))

    print(f"output ./{HEADER_PATH}")