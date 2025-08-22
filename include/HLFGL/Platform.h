#pragma once

#include <HLFGL/Config.h>

#if __linux__ || __linux || linux
#define HLFGL_SYSTEM_LINUX 1
#endif

#if HLFGL_ENABLE_GL
#include <KHR/khrplatform.h>
#ifndef GLAPI
#define GLAPI KHRONOS_APICALL
#endif
#ifndef GLAPIENTRY
#define GLAPIENTRY KHRONOS_APIENTRY
#endif
#ifndef GLAPIENTRYP
#define GLAPIENTRYP GLAPIENTRY *
#endif
#endif // HLFGL_ENABLE_GL