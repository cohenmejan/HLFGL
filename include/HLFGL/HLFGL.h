#pragma once

#include <compare>

namespace HLF::GL {
	struct Version {
		unsigned int major {};
		unsigned int minor {};

		constexpr auto operator<=>(const Version& other) const {
			if(auto cmp = major <=> other.major; cmp != 0) return cmp;
			return minor <=> other.minor;
		}
	};

	void* LoadLibrary(const char* path);
	bool FreeLibrary(void* handle);

	void* LoadGLLibrary();

	using PFN_GetProcAddress = void*(*)(const char* name);
	void* GetProcAddress(const char* name);

	Version GetVersion(PFN_GetProcAddress proc = GetProcAddress);
}

#include <HLFGL/GLDefinitions.h>
#include <stdio.h>

#ifdef __unix__
#define HLF_SYSTEM_UNIX 1
#include <EGL/egl.h>
#include <dlfcn.h>
#elif defined(WIN32) || defined(_WIN32)
#define HLF_SYSTEM_WINDOWS 1
#include <Windows.h>
#endif

namespace HLF::GL {
	inline void* s_glLibHandle {};

	/// gets the highest supported GL version\n
	/// returns {0, 0} if no version is supported
	inline Version GetVersion(PFN_GetProcAddress proc) {
		static Version _cachedVersion {};

		if(_cachedVersion.major != 0 && _cachedVersion.minor != 0)
			return _cachedVersion;

		_cachedVersion = {};

		fn_glGetIntegerv = (PFN_glGetIntegerv)proc("glGetIntegerv");
		fn_glGetString = (PFN_glGetString)proc("glGetString");

		if(fn_glGetIntegerv) {
			int major {};
			int minor {};
			glGetIntegerv(GL_MAJOR_VERSION, &major);
			glGetIntegerv(GL_MINOR_VERSION, &minor);
			_cachedVersion = Version {(unsigned int)major, (unsigned int)minor};
		}
		else if(fn_glGetString) {
			const GLubyte* versionString = glGetString(GL_VERSION);
			if(versionString) {
				sscanf((const char*)versionString, "%d.%d", &_cachedVersion.major, &_cachedVersion.minor);
			}
		}

		return _cachedVersion;
	}

	/// unloads the GL library
	/// @return true on success
	inline bool Delete() {
		bool status = FreeLibrary(s_glLibHandle);
		s_glLibHandle = 0;
		return status;
	}

	enum struct InitStatusCode {
		Success,
		GLLibFailedToLoad,
		RequestedVersionNotSupported,
		FunctionsFailedToLoad,
	};

	constexpr const char* ToString(InitStatusCode code) {
		switch(code) {
			case InitStatusCode::Success: return "Success";
			case InitStatusCode::GLLibFailedToLoad: return "GLLibFailedToLoad";
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

	/// loads the GL library and initializes GL function pointers
	/// @param initVersion the version to be initialized. function pointers for GL functions from version 1.0 to
	/// 'initVersion' will be loaded. if the highest supported GL version is less than 'initVersion',
	/// this function will load GL functions up to the highest supported GL version
	/// @param proc the function that will be used to load each function
	inline InitStatus Init(Version initVersion = GetVersion(), PFN_GetProcAddress proc = GetProcAddress) {
		if(s_glLibHandle)
			Delete();

		s_glLibHandle = LoadGLLibrary();
		if(!s_glLibHandle)
			return InitStatus {false, InitStatusCode::GLLibFailedToLoad};

		Version version = GetVersion(proc);
		if(version < initVersion) {
			LoadFunctionPointers(version, proc);
			FreeLibrary(s_glLibHandle);
			return InitStatus {false, InitStatusCode::RequestedVersionNotSupported};
		}

		LoadFunctionPointers(initVersion, proc);
		return InitStatus {true, InitStatusCode::Success};
	}
}

#if HLF_SYSTEM_UNIX

namespace HLF::GL {
	inline void* LoadLibrary(const char* path) {
		return dlopen(path, RTLD_NOW | RTLD_LOCAL);
	}

	inline bool FreeLibrary(void* handle) {
		return dlclose(handle) == 0;
	}

	inline void* LoadGLLibrary() {
		return LoadLibrary("libGL.so.1");
	}

	inline void* GetProcAddress(const char* name) {
		return (void*)eglGetProcAddress(name);
	}
}

#endif // HLF_SYSTEM_UNIX
