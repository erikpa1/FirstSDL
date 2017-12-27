#pragma once

#include "Application.h"
#include "Window.h"

int main()
{
	Application app;
	Window *window = new Window();
	app.addWindow(window);	
	app.TickAutomaticly();
	
	
	return 0;;
}