#pragma once

#ifdef WIN32

#ifdef DLL_EXPORT
#define CPP_UTIL_API __declspec(dllexport)
#else
#define CPP_UTIL_API __declspec(dllimport)
#endif

#else

#define CPP_UTIL_API

#endif
 