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
}

void Buton::Update()
{
}

void Buton::Render()
{
}

void Buton::OnClick(sf::Vector2f position)
{

}
