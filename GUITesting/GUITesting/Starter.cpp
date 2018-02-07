#pragma once


#include "Application.h"
#include "AppWindow.h"
#include "Renderable.h"
#include "Buton.h"
#include "TestObject.h"
//#include "DebugWindow.h"
#include "SQLite/sqlite3.h"



int main()
{	
	AppWindow window;		
	//Buton* btn = new Buton();
	Buton* buton = new Buton(100, 100, 50, 50);	
	window.AddElement(buton);
	window.IndependentStart();
	//app.AddWindow(window);	
	//app.TickAutomaticly();
	//DebugWindow::WatchClass("okno", 102);
	//DebugWindow::WatchMethod(102, "srielaj", 1);

	
	return 0;
}
