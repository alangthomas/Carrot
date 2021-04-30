#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define CARROT_API __declspec(dllexport)
	#else
		#define CARROT_APT __declspec(dllimport)
	#endif  
#else
	#error Carrot only support windows
#endif 
