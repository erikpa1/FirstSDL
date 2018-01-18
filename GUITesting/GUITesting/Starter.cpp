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
	Label* createLabel = new Label();
	createLabel->SetText("No nazdar");

	btn->CopyLabelStyle(createLabel);
	
	window.AddElement(createLabel, sf::Vector2f(80, 80));
	window.AddElement(btn, sf::Vector2f(10, 10));
	window.IndependentStart();



	//app.AddWindow(window);	
	//app.TickAutomaticly();
	
	
	return 0;
}

/* Poznamky na spracovanie
 *
 *vyskusat std::array, pre pevny pocet prvkov
 *pouzivat ako navratovu hodnotu auto
 *
 */