#include "Label.h"
#include <iostream>
#include <fstream>



Label::Label()
{
	this->CommonConstructor();
}

Label::Label(std::string text) 
{
	this->_actualText.setString(text);
	this->CommonConstructor();
}

Label::Label(std::string text, const sf::Vector2f universal) : Renderable(universal)
{
	this->CommonConstructor();
}

Label::Label(std::string text, const sf::Vector2f position, const sf::Vector2f dimension) : Renderable(position, dimension)
{
	this->CommonConstructor();
}


Label::~Label()
{
}

void Label::Start()
{
	Renderable::Start();
}

void Label::Update()
{
	Renderable::Update();
}

void Label::Render()
{
	Renderable::Render();		
	this->_window->draw(this->_actualText);
}

void Label::SetPosition(sf::Vector2f newPosition)
{
	Renderable::SetPosition(newPosition);
	this->_actualText.setPosition(newPosition);
}

void Label::SetDimension(sf::Vector2f newDimension)
{
	Renderable::SetDimension(newDimension);
	this->_actualText.setScale(newDimension);
}

void Label::SetText(std::string text)
{
	this->_actualText.setString("Ahoj");
}

void Label::SetButtonColor(int r, int g, int b, int a)
{
	this->_actualText.setFillColor(sf::Color(r, g, b, a));	
}

sf::Vector2f Label::GetDimension() const
{

	return sf::Vector2f(this->_actualText.getGlobalBounds().width, this->_actualText.getGlobalBounds().height);
}

void Label::CommonConstructor()
{	
	this->font = new sf::Font();
	this->font->loadFromFile("Platform/Data/Fonts/micross.ttf");
	this->_actualText.setFont(*font);
	this->_actualText.setStyle(sf::Text::Bold);
	this->_actualText.setString("Nazdar");
	this->_actualText.setCharacterSize(20);
	this->_actualText.setFillColor(sf::Color::White);
	this->_drawable = &_actualText;
	
}
