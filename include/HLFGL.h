#pragma once

#include <stdio.h>

namespace HLF::GL {
	struct GLFnEntry {
		const char* name;
		void** ptr;
	};

	struct GLFuncTableGroup {
		int major, minor;
		const GLFnEntry* table;
		size_t count;
	};
}

#include <HLFGLDefintions.h>

namespace HLF {
	struct GLVersion {
		int major {};
		int minor {};
	};

	void* GLGetProcAddress(const char* name);

	/// gets the highest supported GL version\n
	/// returns (0, 0) if no version is supported
	inline GLVersion GLGetVersion() {
		using namespace HLF::GL;
		static GLVersion _cachedVersion;

		if(_cachedVersion.major != 0 && _cachedVersion.minor != 0)
			return _cachedVersion;

		_cachedVersion = {};

		_glGetIntegerv = (PFN_glGetIntegerv)GLGetProcAddress("glGetIntegerv");
		_glGetString = (PFN_glGetString)GLGetProcAddress("glGetString");

		if(_glGetIntegerv) {
			glGetIntegerv(GL_MAJOR_VERSION, &_cachedVersion.major);
			glGetIntegerv(GL_MINOR_VERSION, &_cachedVersion.minor);
		}
		else if(_glGetString) {
			const GLubyte* versionString = glGetString(GL_VERSION);
			if(versionString) {
				sscanf((const char*)versionString, "%d.%d", &_cachedVersion.major, &_cachedVersion.minor);
			}
		}

		return _cachedVersion;
	}

	/// initializes GL function pointers
	/// @return true if all required GL version is successfully loaded
	inline bool GLInit(auto initVersion = GLVersion {1, 0}) {
		using namespace HLF::GL;

		GLVersion version {GLGetVersion()};

		if(version.major < initVersion.major || (
			   version.major == initVersion.major && version.minor < initVersion.minor))
			return false;

		bool success = true;
		for(const auto& group : glFuncGroups) {
			if(initVersion.major < group.major || (initVersion.major == group.major && initVersion.minor < group.minor))
				break;

			for(int i {}; i < group.count; ++i) {
				const GLFnEntry& entry {group.table[i]};
				void* ptr = GLGetProcAddress(entry.name);
				if(!ptr) success = false;
				*entry.ptr = ptr;
			}
		}

		return success;
	}
}
