#include "Renderable.h"
#include <random>


Renderable::Renderable(const sf::RenderWindow *window)
{	
	this->_window = _window;

	this->CommonContructior();
	
	this->position.x = 0;
	this->position.y = 0;
	this->dimension.x = 0;
	this->dimension.y = 0;

}

Renderable::Renderable(const sf::RenderWindow* window, const sf::Vector2f universal)
{
	this->_window = _window;
	this->CommonContructior();
	this->position = universal;
	this->dimension = universal;

}

Renderable::Renderable(const sf::RenderWindow* window, const sf::Vector2f position, const sf::Vector2f dimension)
{
	this->_window = _window;
	this->CommonContructior();
	this->position = position;
	this->dimension = dimension;
	
}

void Renderable::CommonContructior()
{
	this->ID = rand();
	this->_canBeDrawed = true;
	this->_canRecieveUpdate = true;
}



Renderable::~Renderable()
{
	
}


void Renderable::Update()
{
	if (!this->_canRecieveUpdate)
	{
		return;
	}
}

void Renderable::Render()
{
	
	if (this->_canBeDrawed && this->_drawable)
	{
		this->_window->draw(*this->_drawable);
		
	}
}

void Renderable::ChangeDrawinStatus(bool value)
{
	this->_canBeDrawed = value;
}

void Renderable::ChangeUpdateStatus(bool value)
{
	this->_canRecieveUpdate = value;
}

void Renderable::setID(int ID)
{
	this->ID = ID;
}


