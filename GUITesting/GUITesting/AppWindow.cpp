#include "AppWindow.h"
#include "Buton.h"
#include "EventReactable.h"



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

void AppWindow::AddElement(Renderable* renderable, sf::Vector2f position)
{	
	renderable->SetRenderer(this->_window);
	this->_renderableObjects.push_back(*renderable);
	renderable->setPosition(position);
}

void AppWindow::TestingMethod()
{
	//Renderable *testElement = new Renderable(this->_window);
	//this->AddElement(testElement, sf::Vector2f(10 , 10));
}

void AppWindow::particalTick()
{

	sf::Event event;
	while (this->_window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			_window->close();
	}

	for (int i = 0; i < this->_renderableObjects.size(); i++)
	{
		this->_window->clear();
		this->_renderableObjects.at(i).Update();
		this->_renderableObjects.at(i).Render();
		this->_window->display();

	}

}



void AppWindow::HandleEvents(sf::Event event)
{
	for (int i = 0; i < this->_renderableObjects.size(); i++)
	{
		if (typeid(this->_renderableObjects.at(i)) == typeid(EventReactable&));
		{
			//(EventReactable)this->_renderableObjects.at(i).Start();
		}
	}
}
