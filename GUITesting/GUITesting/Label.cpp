#include "Label.h"
#include "Fonts.h"

#include <iostream>
#include <fstream>



Label::Label()
{
	this->CommonConstructor();
}

Label::Label(string text) 
{	
	this->CommonConstructor();
	this->_actualText.setString(text);
}

Label::Label(string text, int x, int y, int w, int h) : Renderable(x, y ,w ,h)
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

void Label::SetPosition(int x, int y)
{
	Renderable::SetPosition(x,y);
	this->_actualText.setPosition(x, y);
}

void Label::SetDimension(int x, int y)
{
	Renderable::SetDimension(x, y);
	this->_actualText.setScale(x, y);
}

void Label::SetText(std::string text)
{
	this->_actualText.setString("Ahoj");
}

void Label::SetButtonColor(int r, int g, int b, int a)
{
	this->_actualText.setFillColor(sf::Color(r, g, b, a));	
}

int Label::GetDimensionX() const
{
	return this->_actualText.getGlobalBounds().width;
}

int Label::GetDimensionY() const
{
	return this->_actualText.getGlobalBounds().height;
}

void Label::CommonConstructor()
{		
	this->font.loadFromFile(FONT_MICROSS);
	this->_actualText.setFont(font);
	this->_actualText.setStyle(Text::Bold);
	this->_actualText.setString("Default");
	this->_actualText.setCharacterSize(20);
	this->_actualText.setFillColor(sf::Color::White);
	this->_drawable = &_actualText;
	
}
