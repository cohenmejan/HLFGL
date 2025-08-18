// Auto-generated HLFGL.cpp

#include <HLFGL.h>
#include <stdio.h>

#ifdef __unix__
#define HLF_SYSTEM_UNIX 1
#include <GL/glx.h>
#elif defined(WIN32) || defined(_WIN32)
#define HLF_SYSTEM_WINDOWS 1
#include <Windows.h>
#endif

namespace HLF {
#if HLF_SYSTEM_WINDOWS
    void* GLGetProcAddress(const char* name) {
        void* proc = (void*)wglGetProcAddress(name);
        if (!proc) {
            HMODULE module = GetModuleHandleA("opengl32.dll");
            if (module) {
                proc = (void*)GetProcAddress(module, name);
            }
        }
        return proc;
    }
#elif HLF_SYSTEM_UNIX
    void* GLGetProcAddress(const char* name) {
        return (void*)glXGetProcAddress((const GLubyte*)name);
    }
#endif
}