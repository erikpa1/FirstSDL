#pragma once

#include "Application.h"
#include "AppWindow.h"
#include "Renderable.h"
#include "Buton.h"
#include "TestObject.h"
#include <memory>
#include <iostream>
#include <random>


int main()
{	
	AppWindow window;	
	
	Buton* btn = new Buton();
	

	window.AddElement(btn, sf::Vector2f(50, 50));
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