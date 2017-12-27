#include "Application.h"



Application::Application()
{
}


Application::~Application()
{
}

void Application::addWindow(Window *window)
{
	//this->_windowses.push_back(*window);
}

void Application::TickAutomaticly()
{
	for (int i = 0; i < this->_windowses.size(); i++)
	{
		if (this->_windowses.at(i).CanAcceptTick())
		{
			this->_windowses.at(i).Tick();
		}
		
	}
}
