#include "Buton.h"
#include <iostream>



Buton::Buton() : Renderable()
		//	: Renderable(renderer)
{
	this->CommonConstructor();
}

Buton::Buton(const sf::Vector2f universal) : Renderable(universal)
			//: Renderable(renderer, universal)
{
	this->CommonConstructor();
}

Buton::Buton(const sf::Vector2f position, const sf::Vector2f dimension) : Renderable(position, dimension)
			//: Renderable(renderer, _position, _dimension)
{
	this->CommonConstructor();
}

Buton::~Buton()
{

}

void Buton::Start()
{
	Renderable::Start();
}

void Buton::Update()
{
	Renderable::Update();
}

void Buton::SetPosition(sf::Vector2f newPosition)
{
	Renderable::SetPosition(newPosition);
	this->_backgroundShape->setPosition(newPosition);
	this->_buttonText.SetPosition(Renderable::GetMiddlePostion(*this, this->_buttonText));
}

void Buton::SetDimension(sf::Vector2f newDimension)
{
	Renderable::SetDimension(newDimension);
	this->_backgroundShape->setScale(newDimension);

}


void Buton::Render()
{
	Renderable::Render();
	this->_buttonText.Render();

}

void Buton::SetRenderer(sf::RenderWindow* window)
{
	Renderable::SetRenderer(window);
	this->_buttonText.SetRenderer(window);
}

void Buton::SetText(std::string text)
{			
	this->_buttonText.SetText("Toto neni text zvrchu");
}

void Buton::EventHappened(sf::Event event)
{	
	
}

void Buton::CopyLabelStyle(Label* label)
{

}

void Buton::setColor(int r, int g, int b, int a)
{
	this->_backgroundShape->setFillColor(sf::Color(r, g, b, a));
}

Label* Buton::GetLabel()
{
	return &this->_buttonText;
}

void Buton::CommonConstructor()
{
	
	this->_backgroundShape = new sf::RectangleShape(this->_position);	
	this->_backgroundShape->setFillColor(sf::Color(sf::Color(50, 50, 50)));
	this->_backgroundShape->setScale(this->GetDimension());
	this->_drawable = this->_backgroundShape;
	this->_buttonText.SetParent(this);	
	this->_buttonText.SetPosition(Renderable::GetMiddlePostion(*this, this->_buttonText));

}
