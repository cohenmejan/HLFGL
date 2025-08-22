# HLFGL
A GL loader with header generation.

Loads core libraries as well as extensions. Defines constants, types, and functions.

**Supported APIs**
- GL
- EGL

**Supported Platforms**
- Linux

## Integration
1. Clone the repo: ```git clone https://github.com/cohenmejan/HLFGL.git```

2. Run GenerateHeaders.py
3. Add to your build system
   * **CMake:** ```add_subdirectory(HLFGL)```
   * **Manual:** add ```HLFGL/include``` to your include paths

4. Include HLFGL in your project with ```#include <HLFGL/HLFGL.h>```

## Usage
Initialize functions with ```HLFGL::GLInit()``` for OpenGL.
For EGL, ```HLFGL::EGLInit()```.

Unload and free resources with ```HLFGL::GLDelete()```, or for EGL, ```HLFGL::EGLDelete()``` 

APIs can be selected at compile time either by modifying ```Config.h```, or by defining the following values before
including ```HLFGL.h```:
* HLFGL_ENABLE_GL
* HLFGL_ENABLE_EGL

Set a definition to 1 to enable it, or 0 to disable it, like so for EGL: ```#define HLFGL_ENABLE_EGL 1```
