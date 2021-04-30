#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Carrot::Application* Carrot::CreateApplication();

int main(int argc, char** argv)
{
	printf("carrot engine");
	auto app = Carrot::CreateApplication();
	app->Run();
	delete app;
}

#endif