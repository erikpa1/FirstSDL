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
	this->_parent->GetRenderWindow()->draw(this->_actualText);		
}

void Label::SetText(std::string text)
{
	this->_actualText.setString("Ahoj");
}

void Label::SetButtonColor(int r, int g, int b, int a)
{
	this->_actualText.setFillColor(sf::Color(r, g, b, a));
	
}

void Label::CommonConstructor()
{	
	
	this->font = new sf::Font();
	if(!this->font->loadFromFile("digital-7.ttf"))
	{ 
	}
	this->_actualText.setFont(*font);
	this->_actualText.setStyle(sf::Text::Bold);
	this->_actualText.setString("Ahoj");
	this->_actualText.setCharacterSize(30);
	this->_actualText.setFillColor(sf::Color::Red);
	
	
}
