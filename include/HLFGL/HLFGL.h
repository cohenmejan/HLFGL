#pragma once

#include <compare>

#if __unix__
#define HLFGL_SYSTEM_UNIX 1
#endif

#include <HLFGL/Config.h>

namespace HLF::GL {
	using Fn_GetProcAddress = void*(*)(const char* name);

	struct Version {
		unsigned int major {};
		unsigned int minor {};

		constexpr auto operator<=>(const Version& other) const {
			if(auto cmp = major <=> other.major; cmp != 0) return cmp;
			return minor <=> other.minor;
		}

		constexpr bool operator==(const Version& other) const = default;
	};

	enum struct InitStatusCode {
		Success,
		LibraryFailedToLoad,
		DisplayFailedToInitialize,
		RequestedVersionNotSupported,
		FunctionsFailedToLoad,
	};

	constexpr const char* ToString(InitStatusCode code) {
		switch(code) {
			case InitStatusCode::Success: return "Success";
			case InitStatusCode::LibraryFailedToLoad: return "GLLibFailedToLoad";
			case InitStatusCode::RequestedVersionNotSupported: return "RequestedVersionNotSupported";
			case InitStatusCode::FunctionsFailedToLoad: return "FunctionsFailedToLoad";
			default: return "Unknown";
		}
	}

	struct InitStatus {
		bool success {};
		InitStatusCode code;

		constexpr operator bool() const {
			return success;
		}
	};

	void* LoadLibrary(const char* path);
	bool UnloadLibrary(void* handle);
}

// common platform specific definitions

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
}

#endif // HLFGL_SYSTEM_UNIX

// generated definitions
#include <HLFGL/GLDefinitions.h>

#include <stdio.h>

// usage implementations

#if HLFGL_ENABLE_GL

namespace HLF::GL {
	inline void* s_glLibHandle {};
	inline void* s_glPlatformLibHandle {};

	inline Fn_GetProcAddress s_fn_GLPlatformGetProcAddress {};

	/// gets the function's address via the platform's GL API
	inline void* GLPlatformGetProcAddress(const char* functionName) {
		return s_fn_GLPlatformGetProcAddress(functionName);
	}

	/// gets the function's address first using the platform's GL API.
	/// if that fails, it will attempt to load the function using the OS API
	/// @return the address of the function
	void* GLGetProcAddress(const char* functionName);

	/// loads the GL library and the platform's GL library (e.g., EGL/WGL),
	/// as well as the platform's GL function loader
	bool GLLoadLibraries();

	/// gets the highest supported GL version\n
	/// returns {0, 0} if no version is supported or if the gl lib fails to load
	inline Version GLGetVersion(Fn_GetProcAddress proc = GLGetProcAddress) {
		Version version {};

		if(!s_glLibHandle) {
			GLLoadLibraries();
			if(!s_glLibHandle)
				return version;
		}

		if(!s_fn_glGetIntegerv) s_fn_glGetIntegerv = (Fn_glGetIntegerv)proc("glGetIntegerv");
		if(!s_fn_glGetString) s_fn_glGetString = (Fn_glGetString)proc("glGetString");

		if(s_fn_glGetIntegerv) {
			int major {};
			int minor {};
			glGetIntegerv(GL_MAJOR_VERSION, &major);
			glGetIntegerv(GL_MINOR_VERSION, &minor);
			version = Version {(unsigned int)major, (unsigned int)minor};
		}
		else if(s_fn_glGetString) {
			const GLubyte* versionString = glGetString(GL_VERSION);
			if(versionString) {
				sscanf((const char*)versionString, "%d.%d", &version.major, &version.minor);
			}
		}

		return version;
	}

	/// unloads the GL libraries and frees their resources
	inline bool GLDelete() {
		if(!UnloadLibrary(s_glLibHandle)) return false;
		if(!UnloadLibrary(s_glPlatformLibHandle)) return false;

		s_glLibHandle = 0;
		s_glPlatformLibHandle = 0;
		s_fn_GLPlatformGetProcAddress = 0;

		return true;
	}

	/// loads the GL library and initializes GL function pointers
	/// @param initVersion the version to be initialized. function pointers for GL functions from version 1.0 to
	/// 'initVersion' will be loaded. if the highest supported GL version is less than 'initVersion',
	/// this function will load GL functions up to the highest supported GL version
	/// @param proc the function that will be used to load each function
	inline InitStatus GLInit(Version initVersion = GLGetVersion(), Fn_GetProcAddress proc = GLGetProcAddress) {
		if(!s_glLibHandle && !GLLoadLibraries())
			return InitStatus {false, InitStatusCode::LibraryFailedToLoad};

		Version version = GLGetVersion(proc);
		if(version < initVersion) {
			GLLoadFunctionPointers(version, proc);
			return InitStatus {false, InitStatusCode::RequestedVersionNotSupported};
		}

		GLLoadFunctionPointers(initVersion, proc);
		return InitStatus {true, InitStatusCode::Success};
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

	inline void* GLGetProcAddress(const char* functionName) {
		void* ptr {GLPlatformGetProcAddress(functionName)};
		if(!ptr) ptr = dlsym(s_glLibHandle, functionName);
		return ptr;
	}
}

#endif // HLF_SYSTEM_UNIX
#endif // HLFGL_ENABLE_GL

#if HLFGL_ENABLE_EGL

namespace HLF::GL {
	inline void* s_eglLibHandle {};
	inline EGLDisplay s_eglDefaultDisplay {};
	inline Version s_eglVersion {};

	bool EGLLoadLibrary();
	void* EGLGetProcAddress(const char* functionName);

	inline bool EGLInitDisplay() {
		if(!s_eglLibHandle) {
			EGLLoadLibrary();
			if(!s_eglLibHandle) return false;
		}

		if(!s_fn_eglGetDisplay) {
			s_fn_eglGetDisplay = (Fn_eglGetDisplay)eglGetProcAddress("eglGetDisplay");
			if(!s_fn_eglGetDisplay) return false;
		}

		if(!s_fn_eglQueryString) {
			s_fn_eglQueryString = (Fn_eglQueryString)eglGetProcAddress("eglQueryString");
			if(!s_fn_eglQueryString) return false;
		}

		if(!s_fn_eglInitialize) {
			s_fn_eglInitialize = (Fn_eglInitialize)eglGetProcAddress("eglInitialize");
			if(!s_fn_eglInitialize) return false;
		}

		s_eglDefaultDisplay = eglGetDisplay(EGL_DEFAULT_DISPLAY);
		if(s_eglDefaultDisplay == EGL_NO_DISPLAY) return false;

		s_eglVersion = {};
		EGLint major {};
		EGLint minor {};
		if(!eglInitialize(s_eglDefaultDisplay, &major, &minor)) return false;

		s_eglVersion = Version {(unsigned int)major, (unsigned int)minor};

		return true;
	}

	inline Version EGLGetVersion() {
		if(!s_eglDefaultDisplay && !EGLInitDisplay()) return Version {};
		return s_eglVersion;
	}

	inline bool EGLDelete() {
		s_eglDefaultDisplay = 0;
		s_eglVersion = {};
		if(!UnloadLibrary(s_eglLibHandle)) return false;
		s_eglLibHandle = 0;
		return true;
	}

	inline InitStatus EGLInit(Version initVersion = EGLGetVersion(), Fn_GetProcAddress proc = EGLGetProcAddress) {
		if(!s_eglLibHandle && !EGLLoadLibrary())
			return InitStatus {false, InitStatusCode::LibraryFailedToLoad};

		if(!s_eglDefaultDisplay && !EGLInitDisplay())
			return InitStatus {false, InitStatusCode::DisplayFailedToInitialize};

		if(initVersion < EGLGetVersion())
			return InitStatus {false, InitStatusCode::RequestedVersionNotSupported};

		EGLLoadFunctionPointers(initVersion, proc);

		const char* extensions {eglQueryString(s_eglDefaultDisplay, EGL_EXTENSIONS)};

		return InitStatus {true, InitStatusCode::Success};
	}
}


#if HLFGL_SYSTEM_UNIX

namespace HLF::GL {
	inline bool EGLLoadLibrary() {
		s_eglLibHandle = LoadLibrary("libEGL.so.1");
		if(!s_eglLibHandle) return false;

		s_fn_eglGetProcAddress = (Fn_eglGetProcAddress)dlsym(s_eglLibHandle, "eglGetProcAddress");
		if(!s_fn_eglGetProcAddress) return false;

		return true;
	}

	inline void* EGLGetProcAddress(const char* functionName) {
		void* ptr {(void*)eglGetProcAddress(functionName)};
		if(!ptr) ptr = dlsym(s_eglLibHandle, functionName);
		return ptr;
	}
}

#endif // HLFGL_SYSTEM_UNIX
#endif // HLFGL_ENABLE_EGL