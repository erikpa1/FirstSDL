#include "Buton.h"
#include <iostream>



Buton::Buton() : Renderable()
		//	: Renderable(renderer)
{
	this->CommonConstructor();
}


Buton::Buton(int x, int y, int w, int h) : Renderable(x, y, w, h)		
{
	this->CommonConstructor();
	this->SetPosition(x, y);
	this->_backgroundShape->setPosition(x, y);
	this->_backgroundShape->setScale(w, h);
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

void Buton::SetPosition(int x, int y)
{
	Renderable::SetPosition(x, y);
	this->_backgroundShape->setPosition(x, y);

	Vector2i temp = Renderable::GetMiddlePostion(*this, this->_buttonText);
	this->_buttonText.SetPosition(temp.x, temp.y);
}

void Buton::SetDimension(int x, int y)
{
	Renderable::SetDimension(x, y);
	this->_backgroundShape->setScale(x, y);

}


void Buton::Render()
{
	Renderable::Render();
	this->_buttonText.Render();
	cout << this->_backgroundShape->getScale().x << endl;
	cout << this->_backgroundShape->getScale().y << endl;
	cout << this->GetDimensionX() << endl;
	cout << this->GetDimensionY() << endl;
	cout << ":::::" << endl;
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

	Vector2i temp = this->_position;
	
	this->_backgroundShape = new sf::RectangleShape(Vector2f(temp.x, temp.y));		
	this->SetPosition(0, 0);
	this->_backgroundShape->setPosition(0, 0);
	this->_backgroundShape->setFillColor(sf::Color(sf::Color(50, 100, 50)));
	this->_backgroundShape->setScale(50, 50);	
	this->_drawable = this->_backgroundShape;
	this->_buttonText.SetParent(this);	
	temp = GetMiddlePostion(*this, this->_buttonText);
	this->_buttonText.SetPosition(temp.x, temp.y);

}
