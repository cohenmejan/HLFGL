# HLFGL

A lightweight GL loader with a simple header generation script.  
HLFGL generates headers for constants, types, and functions, and loads both core APIs and extensions.

**Supported APIs:** OpenGL, EGL  
**Supported platforms:** Linux

## Integration

1. Clone the repo: 

```
git clone https://github.com/cohenmejan/HLFGL.git
```

2. Add to your build system
   * **CMake:**

   ```cmake
   add_subdirectory(path/to/HLFGL)
   target_link_libraries(your_target PRIVATE HLFGL)
   ```

   * **Manual:** add ```HLFGL/include``` to your include paths

3. Include HLFGL in your project with ```#include <HLFGL/HLFGL.h>```

## Configuration (optional)

The GL definition headers included in the repository by default do not contain any
extensions, and they include core versions as follows:

**GL:** 3.3  
**EGL:** 1.4

You can regenerate the GL definition headers to suit the APIs and extensions your project needs.

Edit `scripts/GenerateHeadersConfig.cfg`, or copy it to some external location:

```ini
[GL]
# enable GL header generation
Enabled: True
# generates GL 1.0 through 4.5    
CoreVersion: 4.5
# list of GL extensions to generate
Extensions: 
    GL_ARB_debug_output
    GL_EXT_texture_filter_anisotropic

[EGL]
# enable EGL header generation
Enabled: True
# generates EGL 1.0 through 1.5
CoreVersion: 1.5
# list of EGL extensions to generate
Extensions: 
    EGL_KHR_create_context
    EGL_EXT_platform_wayland
```

Once configured, run `scripts/GenerateHeaders.py`:

```
python scripts/GenerateHeaders.py
```

If you made your own external config file, you can run the script with ```--config``` or ```-c``` 
with the path to your config:

```
python path/to/HLFGL/scripts/GenerateHeaders.py --config path/to/your/GenerateHeadersConfig.cfg
```

## Usage

For OpenGL:

```c++
#include <HLFGL/HLFGL.h>

int main() {
    HLFGL::GLInit();
    // use OpenGL functions...
    HLFGL::GLDelete();
}
```

For EGL:

```c++
#include <HLFGL/HLFGL.h>

int main() {
    HLFGL::EGLInit();
    // use EGL functions...
    HLFGL::EGLDelete();
}
```