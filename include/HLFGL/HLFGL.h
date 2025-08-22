#pragma once

#include <compare>

#include <HLFGL/Platform.h>
#include <HLFGL/Config.h>

namespace HLFGL {
	using Fn_GetProcAddress = void*(*)(const char* name);

	void* LoadLibrary(const char* path);
	bool UnloadLibrary(void* handle);
	void* GetProcAddress(void* library, const char* functionName);
}

#if HLFGL_SYSTEM_LINUX

#include <dlfcn.h>

namespace HLFGL {
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

#endif // HLFGL_SYSTEM_LINUX

#if HLFGL_ENABLE_GL

#include <HLFGL/GLDefinitions.h>

namespace HLFGL {
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

#if HLFGL_SYSTEM_LINUX

namespace HLFGL {
	inline bool GLLoadLibraries() {
		const char* glLibNames[] {
			"libGL.so.1",
			"usr/lib/libGL.so.1",
			"libGL.so",
			"usr/lib/libGL.so"
		};

		for(const char** name = glLibNames; *name; ++name) {
			s_glLibHandle = LoadLibrary(*name);
			if(s_glLibHandle) break;
		}
		if(!s_glLibHandle) return false;

		const char* eglLibNames[] {
			"libEGL.so.1",
			"usr/lib/libEGL.so.1",
			"libEGL.so",
			"usr/lib/libEGL.so"
		};

		for(const char** name = eglLibNames; *name; ++name) {
			s_glPlatformLibHandle = LoadLibrary(*name);
			if(s_glPlatformLibHandle) break;
		}
		if(!s_glPlatformLibHandle) return false;

		s_fn_GLPlatformGetProcAddress = (Fn_GetProcAddress)dlsym(s_glPlatformLibHandle, "eglGetProcAddress");
		if(!s_fn_GLPlatformGetProcAddress) return false;

		return true;
	}
}

#endif // HLFGL_SYSTEM_LINUX
#endif // HLFGL_ENABLE_GL

#if HLFGL_ENABLE_EGL

#include <HLFGL/EGLDefinitions.h>

namespace HLFGL {
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

#if HLFGL_SYSTEM_LINUX

namespace HLFGL {
	inline bool EGLLoadLibrary() {
		const char* eglLibNames[] {
			"libEGL.so.1",
			"usr/lib/libEGL.so.1",
			"libEGL.so",
			"usr/lib/libEGL.so"
		};

		for(const char** name = eglLibNames; *name; ++name) {
			s_eglLibHandle = LoadLibrary(*name);
			if(s_eglLibHandle) break;
		}
		if(!s_eglLibHandle) return false;

		s_fn_eglGetProcAddress = (Fn_eglGetProcAddress)GetProcAddress(s_eglLibHandle, "eglGetProcAddress");
		if(!s_fn_eglGetProcAddress) return false;

		return true;
	}
}

#endif // HLFGL_SYSTEM_LINUX
#endif // HLFGL_ENABLE_EGL
