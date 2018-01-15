#include "Buton.h"
#include <iostream>


Buton::Buton() : Renderable()
		//	: Renderable(renderer)
{



}

Buton::Buton(const sf::Vector2f universal) : Renderable(universal)
			//: Renderable(renderer, universal)
{


}

Buton::Buton(const sf::Vector2f position, const sf::Vector2f dimension) : Renderable(position, dimension)
			//: Renderable(renderer, _position, _dimension)
{


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

void Buton::Render()
{
	Renderable::Render();
	this->_buttonText.Render();

}

void Buton::SetFontColor(int r, int g, int b, int a)
{
	this->_buttonText.SetColor(r, g, b, a);
}

void Buton::SetText(std::string text)
{
	this->_buttonText.AddParent(this);
	this->_buttonText.SetRenderer(this->_window);
	this->_buttonText.SetText("Toto neni text zvrchu");
	this->_buttonText.SetPosition(sf::Vector2f(600, 300));
	
}

void Buton::EventHappened(sf::Event event)
{	
	int a = 10;
}

