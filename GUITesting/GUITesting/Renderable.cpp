#include "Renderable.h"
#include <random>
#include <iostream>
#include "SFML/System.hpp"

//
//Renderable::Renderable(Renderable& parent)
//{	
//	this->_window = parent.getRenderWindow();
//	this->_canBeDrawed = parent.GetDrawingState();
//	this->_canRecieveUpdate = parent.GetDrawingState();
//	this->ID = rand();
//	
//	
//
//}

Renderable::Renderable()
{	
	

	this->CommonContructior();
	
	this->_position.x = 1;
	this->_position.y = 1;
	this->_dimension.x = 50;
	this->_dimension.y = 10;

	this->_shape = new sf::RectangleShape(this->_position);
	this->_shape->setFillColor(sf::Color(sf::Color::White));
	this->_shape->setScale(this->getDimension());
	
}

Renderable::Renderable(const sf::Vector2f universal)
{
	this->_window = _window;
	this->CommonContructior();
	this->_position = universal;
	this->_dimension = universal;

}

Renderable::Renderable(const sf::Vector2f position, const sf::Vector2f dimension)
{
	this->_window = _window;
	this->CommonContructior();
	this->_position = position;
	this->_dimension = dimension;
	
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

void Renderable::Start()
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
	
	if (this->_canBeDrawed && this->_shape)
	{
		this->_window->draw(*this->_shape);		
		std::cout << this->_shape->getPosition().x <<std::endl;
		std::cout << this->_shape->getScale().x << std::endl;
	}
}

void Renderable::SetParent(Renderable &parent)
{
	this->_child = &parent;
}

void Renderable::SetRenderer(sf::RenderWindow *window)
{
	this->_window = window;
}

void Renderable::ChangeDrawinStatus(bool value)
{
	this->_canBeDrawed = value;
}

void Renderable::ChangeUpdateStatus(bool value)
{
	this->_canRecieveUpdate = value;
}

void Renderable::setPosition(sf::Vector2f newPosition)
{
	this->_position = newPosition;
	
}

void Renderable::setID(int ID)
{
	this->ID = ID;
}


