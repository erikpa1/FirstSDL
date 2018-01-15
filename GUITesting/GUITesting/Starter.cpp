#pragma once

#include "Application.h"
#include "AppWindow.h"
#include "Renderable.h"
#include "Buton.h"
#include "TestObject.h"
#include <memory>
#include <iostream>


int main()
{
	Application app;
	AppWindow window;	
	
	Buton* btn = new Buton();
	btn->SetText("No nazdar");
	btn->SetFontColor(45, 45, 45, 20);
	window.AddElement(btn, sf::Vector2f(10, 10));
	window.IndependentStart();



	//app.AddWindow(window);	
	//app.TickAutomaticly();
	
	
	return 0;;
}

/* Poznamky na spracovanie
 *
 *vyskusat std::array, pre pevny pocet prvkov
 *pouzivat ako navratovu hodnotu auto
 *
 */