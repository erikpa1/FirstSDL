#pragma once


#include "Application.h"
#include "AppWindow.h"
#include "Renderable.h"
#include "Buton.h"
#include "TestObject.h"
#include "DebugWindow.h"
#include "SQLite/sqlite3.h"
#include "PipeServer.h"
#include "PipeClient.h"


int main()
{	
	AppWindow window;		
	Buton* buton = new Buton(10, 10, 100, 50);	
	window.AddElement(buton);
	

	TestObject obj;
	TestObject *pobj;

	window.IndependentStart();
	//app.AddWindow(window);	
	//app.TickAutomaticly();
	//DebugWindow::WatchClass("okno", 102);
	//DebugWindow::WatchMethod(102, "kresli", 1);

	
	
	return 0;
}
