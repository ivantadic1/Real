#pragma once

#ifdef RE_PLATFORM_WINDOWS
	#ifdef RE_BUILD_DLL
		#define Real_API __declspec(dllexport)
	#else
		#define Real_API __declspec(dllimport)
	#endif
#else
	#error Real only supports Windows!
#endif