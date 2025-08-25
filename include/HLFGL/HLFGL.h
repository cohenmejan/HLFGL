#pragma once

#include <HLFGL/Platform.h>
#include <HLFGL/Config.h>

namespace HLFGL {
	using Fn_GetFunctionAddress = void*(*)(const char* name);

	void* InitLibrary(const char* path);
	bool DeleteLibrary(void* handle);
	void* GetLibraryFunctionAddress(void* library, const char* functionName);

#if HLFGL_ENABLE_GL

	inline void* s_glLibraryHandle {};

	/// handle to the platform's GL API (e.g., EGL, WGL)
	inline void* s_glPlatformLibraryHandle {};
	inline Fn_GetFunctionAddress s_fn_GLPlatformGetFunctionAddress {};

	/// loads the GL library and the platform's GL library (e.g., EGL/WGL),
	/// as well as the platform's GL function loader
	/// @return true on success
	bool GLInitLibraries();

	/// gets the function's address via the platform's GL API (e.g., EGL, WGL)
	void* GLPlatformGetFunctionAddress(const char* functionName);

	/// gets the function's address first using the platform's GL API.
	/// if that fails, it will attempt to load the function using the OS
	/// @return the address of the function
	void* GLGetFunctionAddress(const char* functionName);

	/// initializes the GL library and its functions. requires an existing GL context
	/// @param fn_GetFunctionAddress the function that will be used to load each function
	/// @return true on success
	bool GLInit(Fn_GetFunctionAddress fn_GetFunctionAddress = GLGetFunctionAddress);

	/// unloads the GL libraries and frees their resources
	/// @return true on success
	bool GLDelete();

#endif // HLFGL_ENABLE_GL

#if HLFGL_ENABLE_EGL

	inline void* s_eglLibraryHandle {};

	/// @return true on success
	bool EGLInitLibrary();

	void* EGLGetFunctionAddress(const char* functionName);

	/// loads the EGL library and then initializes its function pointers
	/// @return true on success
	bool EGLInit(Fn_GetFunctionAddress fn_GetFunctionAddress = EGLGetFunctionAddress);

	/// unloads the EGL library and frees resources
	/// @return true on success
	bool EGLDelete();

#endif // HLFGL_ENABLE_EGL

}

#if HLFGL_SYSTEM_LINUX

#include <dlfcn.h>

namespace HLFGL {
	inline void* InitLibrary(const char* path) {
		if(!path) return 0;
		return dlopen(path, RTLD_NOW | RTLD_LOCAL);
	}

	inline bool DeleteLibrary(void* handle) {
		if(!handle) return false;
		return dlclose(handle) == 0;
	}

	inline void* GetLibraryFunctionAddress(void* library, const char* functionName) {
		if(!library || !functionName) return 0;
		return dlsym(library, functionName);
	}
}

#endif // HLFGL_SYSTEM_LINUX

#if HLFGL_ENABLE_GL

#include <HLFGL/gen/GLDefinitions.h>

namespace HLFGL {
	inline void* GLPlatformGetFunctionAddress(const char* functionName) {
		if(!s_fn_GLPlatformGetFunctionAddress && !GLInitLibraries()) return 0;
		return s_fn_GLPlatformGetFunctionAddress(functionName);
	}

	inline void* GLGetFunctionAddress(const char* functionName) {
		void* ptr {GLPlatformGetFunctionAddress(functionName)};
		if(!ptr) ptr = GetLibraryFunctionAddress(s_glLibraryHandle, functionName);
		return ptr;
	}

	inline bool GLDelete() {
		if(!DeleteLibrary(s_glLibraryHandle)) return false;
		if(!DeleteLibrary(s_glPlatformLibraryHandle)) return false;

		s_glLibraryHandle = 0;
		s_glPlatformLibraryHandle = 0;
		s_fn_GLPlatformGetFunctionAddress = 0;

		return true;
	}

	inline bool GLInit(Fn_GetFunctionAddress fn_GetFunctionAddress) {
		if(!s_glLibraryHandle && !GLInitLibraries()) return false;
		GLInitFunctions(fn_GetFunctionAddress);
		return true;
	}
}

#if HLFGL_SYSTEM_LINUX

namespace HLFGL {
	inline bool GLInitLibraries() {
		if(!s_glLibraryHandle) {
			const char* glLibNames[] {
				"libGL.so.1",
				"usr/lib/libGL.so.1",
				"libGL.so",
				"usr/lib/libGL.so",
				0
			};

			for(const char** name = glLibNames; *name; ++name) {
				s_glLibraryHandle = InitLibrary(*name);
				if(s_glLibraryHandle) break;
			}
			if(!s_glLibraryHandle) return false;
		}

		if(!s_glPlatformLibraryHandle) {
			const char* eglLibNames[] {
				"libEGL.so.1",
				"usr/lib/libEGL.so.1",
				"libEGL.so",
				"usr/lib/libEGL.so"
			};

			for(const char** name = eglLibNames; *name; ++name) {
				s_glPlatformLibraryHandle = InitLibrary(*name);
				if(s_glPlatformLibraryHandle) break;
			}
			if(!s_glPlatformLibraryHandle) return false;
		}

		if(!s_fn_GLPlatformGetFunctionAddress) {
			s_fn_GLPlatformGetFunctionAddress = (Fn_GetFunctionAddress)dlsym(s_glPlatformLibraryHandle, "eglGetProcAddress");
			if(!s_fn_GLPlatformGetFunctionAddress) return false;
		}

		return true;
	}
}

#endif // HLFGL_SYSTEM_LINUX
#endif // HLFGL_ENABLE_GL

#if HLFGL_ENABLE_EGL

#include <HLFGL/gen/EGLDefinitions.h>

namespace HLFGL {
	inline void* EGLGetFunctionAddress(const char* functionName) {
		void* ptr {(void*)eglGetProcAddress(functionName)};
		if(!ptr) ptr = GetLibraryFunctionAddress(s_eglLibraryHandle, functionName);
		return ptr;
	}

	inline bool EGLDelete() {
		if(!DeleteLibrary(s_eglLibraryHandle)) return false;
		s_eglLibraryHandle = 0;
		return true;
	}

	inline bool EGLInit(Fn_GetFunctionAddress fn_GetFunctionAddress) {
		if(!s_eglLibraryHandle && !EGLInitLibrary()) return false;
		EGLInitFunctions(fn_GetFunctionAddress);
		return true;
	}
}

#if HLFGL_SYSTEM_LINUX

namespace HLFGL {
	inline bool EGLInitLibrary() {
		if(!s_eglLibraryHandle) {
			const char* eglLibNames[] {
				"libEGL.so.1",
				"usr/lib/libEGL.so.1",
				"libEGL.so",
				"usr/lib/libEGL.so",
				0
			};

			for(const char** name = eglLibNames; *name; ++name) {
				s_eglLibraryHandle = InitLibrary(*name);
				if(s_eglLibraryHandle) break;
			}
			if(!s_eglLibraryHandle) return false;
		}

		if(!s_fn_eglGetProcAddress) {
			s_fn_eglGetProcAddress = (Fn_eglGetProcAddress)GetLibraryFunctionAddress(s_eglLibraryHandle, "eglGetProcAddress");
			if(!s_fn_eglGetProcAddress) return false;
		}

		return true;
	}
}

#endif // HLFGL_SYSTEM_LINUX
#endif // HLFGL_ENABLE_EGL
