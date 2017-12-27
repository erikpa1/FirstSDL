#pragma once
#include "Window.h"
#include <vector>

class Application
{
public:

	Application();
	~Application();

	void addWindow(Window *window);
	void removeWindow(Window *window);

	void TickAutomaticly();
	void TickPause();

	void ExternalUpdate();
	void ExternalDraw();
	void ExternalStart();

private:

	vector<Window> _windowses;

	


};

