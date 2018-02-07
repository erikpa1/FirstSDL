#include "DebugWindow.h"
#include "AppWindow.h"


vector<DebugClass> DebugWindow::_classes;
AppWindow DebugWindow::*_window;


DebugWindow::DebugWindow()
{
}


DebugWindow::~DebugWindow()
{
}

void DebugWindow::RedrawWindow()
{
	for (auto i = 0; i < _classes.size(); i++)
	{
		
	}
}

void DebugWindow::WatchClass(string className, int ID)
{
	DebugClass help(className, ID);
	_classes.push_back(help);
}

void DebugWindow::WatchMethod(int classID, string methodName, int methodID)
{
	for (auto i = 0; i < _classes.size(); i++)
	{
		if(_classes.at(i).GetClassID() == classID)
		{
			_classes.at(i).GetClassID();
		}
	}
}

void DebugWindow::MethodFastBlick(int classID, int methodID)
{
	for (auto i = 0; i < _classes.size(); i++)
	{
		if (_classes.at(i).GetClassID() == classID)
		{
			_classes.at(i).ActivationFlow(classID);		
		}
	}

}

void DebugWindow::OpenWindow()
{
	

}

int DebugWindow::GetNumberOfWatchetObjects()
{
	return _classes.size();
}
