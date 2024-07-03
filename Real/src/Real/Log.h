#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Real {

	class Real_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define HZ_CORE_TRACE(...)    ::Real::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)     ::Real::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)     ::Real::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...)    ::Real::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...)    ::Real::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define HZ_TRACE(...)	      ::Real::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)	      ::Real::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)	      ::Real::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...)	      ::Real::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...)	      ::Real::Log::GetClientLogger()->fatal(__VA_ARGS__)