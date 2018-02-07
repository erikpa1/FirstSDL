#include "AppWindow.h"
#include "Buton.h"
#include "EventReactable.h"
#include <iostream>


AppWindow::AppWindow()
{
	this->_window = new sf::RenderWindow(sf::VideoMode(800, 600), "Its working");
	
}


AppWindow::~AppWindow()
{
}

void AppWindow::IndependentStart()
{
	this->_canWork = true;

	while (this->_canWork && this->_window->isOpen())
	{
		this->particalTick();		
	}
}

void AppWindow::Tick()
{
	this->particalTick();
}

void AppWindow::AddElement(Renderable* renderable)
{		
	this->_renderableObjects.push_back(renderable);
	renderable->SetRenderer(this->_window);
}

void AppWindow::TestingMethod()
{
	
}

void AppWindow::particalTick()
{

	this->_window->clear();
	Event event;
	while (this->_window->pollEvent(event))
	{
		if (event.type == Event::Closed)
		{
			_window->close();
		}			
		else
		{			
			this->HandleEvents(event);
		}
	}

	for (auto i = 0; i < this->_renderableObjects.size(); i++)
	{		
		this->_renderableObjects.at(i)->Update();
		this->_renderableObjects.at(i)->Render();
		
	}

	this->_window->display();
}


void AppWindow::HandleEvents(Event &event)
{
	for (auto i = 0; i < this->_renderableObjects.size(); i++)
	{
		this->_renderableObjects.at(i)->HandleEvents(event);
	}
}

