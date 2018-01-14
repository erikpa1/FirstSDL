#include "Label.h"



Label::Label()
{
}

Label::Label(std::string text) 
{
	this->_actualText.setString(text);
}

Label::Label(std::string text, const sf::Vector2f universal) : Renderable(universal)
{
}

Label::Label(std::string text, const sf::Vector2f position, const sf::Vector2f dimension) : Renderable(position, dimension)
{
}


Label::~Label()
{
}

void Label::Start()
{
}

void Label::Update()
{

}

void Label::Render()
{
	this->_window->draw(this->_actualText);

}

void Label::SetText(std::string text)
{
	this->_actualText.setString("Toto neni text zhora");
}

void Label::CommonConstructor()
{
	sf::Font font;	
	this->_actualText.setFont(font);
	this->_actualText.setString("");
	this->_actualText.setCharacterSize((unsigned)this->_parent->getDimension().y);

}
