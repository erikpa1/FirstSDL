#pragma once

#include <memory>
#include <iostream>
#include <random>

#include "Application.h"
#include "AppWindow.h"
#include "Renderable.h"
#include "Buton.h"
#include "TestObject.h"
#include "DebugWindow.h"


int main()
{	
	//AppWindow window;		
	//Buton* btn = new Buton();
	//window.AddElement(btn, sf::Vector2f(50, 600));
	//window.IndependentStart();
	//app.AddWindow(window);	
	//app.TickAutomaticly();

	DebugWindow::WatchClass("okno", 102);
	DebugWindow::WatchMethod(102, "srielaj", 1);

	
	return 0;
}
