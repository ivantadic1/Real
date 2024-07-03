#pragma once

#include "Core.h"

namespace Real {

	class Real_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}