#pragma once

#include <compare>
#include <stdio.h>

#ifdef __unix__
#define HLF_SYSTEM_UNIX 1
#include <EGL/egl.h>
#elif defined(WIN32) || defined(_WIN32)
#define HLF_SYSTEM_WINDOWS 1
#include <Windows.h>
#endif

namespace HLF {
	struct GLVersion {
		uint major {};
		uint minor {};

		constexpr auto operator<=>(const GLVersion& other) const {
			if(auto cmp = major <=> other.major; cmp != 0) return cmp;
			return minor <=> other.minor;
		}
	};

	struct GLFnEntry {
		const char* name;
		void** ptr;
	};

	struct GLFuncTableGroup {
		GLVersion version;
		const GLFnEntry* table;
		size_t count;
	};
}

#include <HLFGLDefintions.h>

namespace HLF {
	using GLProcLoader = void*(*)(const char* name);

#if HLF_SYSTEM_UNIX
	inline void* GLGetProcAddress(const char* name) {
		return (void*)eglGetProcAddress(name);
	}
#elif HLF_SYSTEM_WINDOWS
	inline void* GLGetProcAddress(const char* name) {
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
	inline GLVersion GLGetVersion() {
		static GLVersion _cachedVersion {};

		if(_cachedVersion.major != 0 && _cachedVersion.minor != 0)
			return _cachedVersion;

		_cachedVersion = {};

		_glGetIntegerv = (PFN_glGetIntegerv)GLGetProcAddress("glGetIntegerv");
		_glGetString = (PFN_glGetString)GLGetProcAddress("glGetString");

		if(_glGetIntegerv) {
			int major, minor;
			glGetIntegerv(GL_MAJOR_VERSION, &major);
			glGetIntegerv(GL_MINOR_VERSION, &minor);
			_cachedVersion = GLVersion {(uint)major, (uint)minor};
		}
		else if(_glGetString) {
			const GLubyte* versionString = glGetString(GL_VERSION);
			if(versionString) {
				sscanf((const char*)versionString, "%d.%d", &_cachedVersion.major, &_cachedVersion.minor);
			}
		}

		return _cachedVersion;
	}

	/// initializes GL function pointers using a specific loader
	/// @return true if all required GL version is successfully loaded
	inline bool GLInit(GLVersion initVersion = GLGetVersion(), GLProcLoader procLoader = GLGetProcAddress) {
		GLVersion version {GLGetVersion()};

		if(version < initVersion)
			return false;

		bool success = true;
		for(const auto& group : glFuncGroups) {
			if(initVersion < group.version)
				break;

			for(int i {}; i < group.count; ++i) {
				const GLFnEntry& entry {group.table[i]};
				void* ptr = procLoader(entry.name);
				if(!ptr) success = false;
				*entry.ptr = ptr;
			}
		}

		return success;
	}
}
