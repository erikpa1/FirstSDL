#include "DebugWindow.h"



DebugWindow::DebugWindow()
{
}


DebugWindow::~DebugWindow()
{
}

void DebugWindow::RegisterClass(string className, int ID)
{
	_classes.push_back(DebugClass(className, ID));
}

void DebugWindow::RegisterMethod(int classID, string methodName, int methodID)
{
	for (auto i = 0; i < _classes.size(); i++)
	{
		if(_classes.at(i).GetClassID() == classID)
		{
			_classes.at(i).CreateMethod(methodName, methodID);
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
			_sleep(20);

		}
	}

}
