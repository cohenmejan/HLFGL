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

	using PFN_GetProcAddress = void*(*)(const char* name);
	void* GetProcAddress(const char* name);

	Version GetVersion(PFN_GetProcAddress proc = GetProcAddress);
}

#include <HLFGL/GLDefinitions.h>

#include <stdio.h>

#ifdef __unix__
#define HLF_SYSTEM_UNIX 1
#include <EGL/egl.h>
#elif defined(WIN32) || defined(_WIN32)
#define HLF_SYSTEM_WINDOWS 1
#include <Windows.h>
#endif

namespace HLF::GL {
#if HLF_SYSTEM_UNIX
	inline void* GetProcAddress(const char* name) {
		return (void*)eglGetProcAddress(name);
	}
#elif HLF_SYSTEM_WINDOWS
	inline void* GetProcAddress(const char* name) {
		void* proc = (void*)wglGetProcAddress(name);

		if (!proc) {
			HMODULE module = GetModuleHandleA("opengl32.dll");
			if (module) {
				proc = (void*)GetProcAddress(module, name);
			}
		}

		return proc;
	}
#endif

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
}
