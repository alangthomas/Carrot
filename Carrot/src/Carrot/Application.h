#pragma once

#include "Core.h"

namespace Carrot {
	class CARROT_API Application
	{
	public:
		Application();
		virtual ~Application();


		void Run();
	};
	//To be defined in client 
	Application* CreateApplication();

}