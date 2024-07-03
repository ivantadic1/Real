#pragma once

#ifdef RE_PLATFORM_WINDOWS

extern Real::Application* Real::CreateApplication();

int main(int argc, char** argv)
{
	Real::Log::Init();
	HZ_CORE_WARN("Initialized Log!");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);

	auto app = Real::CreateApplication();
	app->Run();
	delete app;
}

#endif