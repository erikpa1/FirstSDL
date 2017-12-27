#include "Window.h"
#include "Buton.h"



Window::Window()
{
	this->_window = new sf::RenderWindow(sf::VideoMode(800, 600), "Its working");
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
		
}


Window::~Window()
{
}

void Window::IndependentStart()
{
	this->_canWork = true;

	while (this->_canWork && this->_window->isOpen())
	{
		this->particalTick();
		
	}

}

void Window::Tick()
{
	this->particalTick();
}

void Window::particalTick()
{

	sf::Event event;
	while (this->_window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			_window->close();
	}
/*
	for (int i = 0; i < this->_renderableObjects.size(); i++)
	{
		this->_window->clear();
		this->_renderableObjects.at(i).Update();
		this->_renderableObjects.at(i).Render();
		this->_window->display();

	}
*/
}

void Window::LeftClicked(int x, int y)
{


	//for (int i = 0; i < this->_renderableObjects.size(); i++)
	//{		
	//	Buton *help = this->_renderableObjects.at(i);

	//	if (((help->source->x <= x) && (x <= (help->source->w + help->source->x))) && ((help->source->y <= y) && (y <= help->source->h + help->source->y))) {
	//		if (this->clickable)
	//		{
	//			//;
	//		}

	//	}
	//	this->_renderableObjects.at(i).Update();

	//}
	

}

void Window::HandleEvents(sf::Event event)
{
	switch(event.type)
	{

	case sf::Event::EventType::MouseButtonPressed :
		this->LeftClicked(0, 0);
		break;


		
	}
}
