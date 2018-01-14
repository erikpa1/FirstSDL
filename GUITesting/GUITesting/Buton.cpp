#include "Buton.h"


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

}

void Buton::SetText(std::string text)
{
	this->_buttonText.AddParent(this);
	this->_buttonText.SetText("Toto neni text zvrchu");
	
}

void Buton::EventHappened(sf::Event event)
{
	
	int a = 10;
}

