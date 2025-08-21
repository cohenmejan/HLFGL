#pragma once

#include <compare>

#if __unix__
#define HLFGL_SYSTEM_UNIX 1
#endif

#include <HLFGL/Config.h>

namespace HLF::GL {
	using Fn_GetProcAddress = void*(*)(const char* name);

	void* LoadLibrary(const char* path);
	bool UnloadLibrary(void* handle);
	void* GetProcAddress(void* library, const char* functionName);
}

// common platform-specific definitions

#if HLFGL_SYSTEM_UNIX

#include <dlfcn.h>

namespace HLF::GL {
	inline void* LoadLibrary(const char* path) {
		if(!path) return 0;
		return dlopen(path, RTLD_NOW | RTLD_LOCAL);
	}

	inline bool UnloadLibrary(void* handle) {
		if(!handle) return false;
		return dlclose(handle) == 0;
	}

	inline void* GetProcAddress(void* library, const char* functionName) {
		if(!library || !functionName) return 0;
		return dlsym(library, functionName);
	}
}

#endif // HLFGL_SYSTEM_UNIX

#if HLFGL_ENABLE_GL

#include <HLFGL/GLDefinitions.h>

namespace HLF::GL {
	inline void* s_glLibHandle {};
	inline void* s_glPlatformLibHandle {};

	inline Fn_GetProcAddress s_fn_GLPlatformGetProcAddress {};

	/// gets the function's address via the platform's GL API (e.g., EGL, WGL)
	inline void* GLPlatformGetProcAddress(const char* functionName) {
		return s_fn_GLPlatformGetProcAddress(functionName);
	}

	/// gets the function's address first using the platform's GL API.
	/// if that fails, it will attempt to load the function using the OS
	/// @return the address of the function
	inline void* GLGetProcAddress(const char* functionName) {
		void* ptr {GLPlatformGetProcAddress(functionName)};
		if(!ptr) ptr = GetProcAddress(s_glLibHandle, functionName);
		return ptr;
	}

	/// loads the GL library and the platform's GL library (e.g., EGL/WGL),
	/// as well as the platform's GL function loader
	/// @return true on success
	bool GLLoadLibraries();

	/// unloads the GL libraries and frees their resources
	/// @return true on success
	inline bool GLDelete() {
		if(!UnloadLibrary(s_glLibHandle)) return false;
		if(!UnloadLibrary(s_glPlatformLibHandle)) return false;

		s_glLibHandle = 0;
		s_glPlatformLibHandle = 0;
		s_fn_GLPlatformGetProcAddress = 0;

		return true;
	}

	/// loads the GL library and initializes GL function pointers. requires an existing GL context
	/// @param proc the function that will be used to load each function
	/// @return true on success
	inline bool GLInit(Fn_GetProcAddress proc = GLGetProcAddress) {
		if(!s_glLibHandle && !GLLoadLibraries()) return false;
		GLInitFunctionPointers(proc);
		return true;
	}
}

#if HLFGL_SYSTEM_UNIX

namespace HLF::GL {
	inline bool GLLoadLibraries() {
		s_glLibHandle = LoadLibrary("libGL.so.1");
		if(!s_glLibHandle) return false;

		s_glPlatformLibHandle = LoadLibrary("libEGL.so.1");
		if(!s_glPlatformLibHandle) return false;

		s_fn_GLPlatformGetProcAddress = (Fn_GetProcAddress)dlsym(s_glPlatformLibHandle, "eglGetProcAddress");
		if(!s_fn_GLPlatformGetProcAddress) return false;

		return true;
	}
}

#endif // HLF_SYSTEM_UNIX
#endif // HLFGL_ENABLE_GL

#if HLFGL_ENABLE_EGL

#include <HLFGL/EGLDefinitions.h>

namespace HLF::GL {
	inline void* s_eglLibHandle {};

	/// @return true on success
	bool EGLLoadLibrary();

	inline void* EGLGetProcAddress(const char* functionName) {
		void* ptr {(void*)eglGetProcAddress(functionName)};
		if(!ptr) ptr = GetProcAddress(s_eglLibHandle, functionName);
		return ptr;
	}

	/// unloads the EGL library and frees resources
	/// @return true on success
	inline bool EGLDelete() {
		if(!UnloadLibrary(s_eglLibHandle)) return false;
		s_eglLibHandle = 0;
		return true;
	}

	/// loads the EGL library and then initializes its function pointers
	/// @return true on success
	inline bool EGLInit(Fn_GetProcAddress proc = EGLGetProcAddress) {
		if(!s_eglLibHandle && !EGLLoadLibrary()) return false;
		EGLInitFunctionPointers(proc);
		return true;
	}
}


#if HLFGL_SYSTEM_UNIX

namespace HLF::GL {
	inline bool EGLLoadLibrary() {
		s_eglLibHandle = LoadLibrary("libEGL.so.1");
		if(!s_eglLibHandle) return false;

		s_fn_eglGetProcAddress = (Fn_eglGetProcAddress)GetProcAddress(s_eglLibHandle, "eglGetProcAddress");
		if(!s_fn_eglGetProcAddress) return false;

		return true;
	}
}

#endif // HLFGL_SYSTEM_UNIX
#endif // HLFGL_ENABLE_EGL