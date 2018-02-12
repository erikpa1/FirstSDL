#include "Renderable.h"
#include <random>
#include <iostream>
#include "SFML/System.hpp"


Renderable::Renderable()
{		
	this->CommonConstructor();
	
	this->_position.x = 1;
	this->_position.y = 1;
	this->_dimension.x = 200;
	this->_dimension.y = 100;

}


Renderable::Renderable(int x, int y, int w, int h)
{	
	this->CommonConstructor();
	this->_position = Vector2i(x, y);
	this->_dimension = Vector2i(w, h);
	
}

void Renderable::AddChild(Renderable* child)
{
	this->_children.push_back(child);
}

void Renderable::SetParent(Renderable* parent)
{
	this->_parent = parent;
	this->_window = parent->GetRenderWindow();
}

void Renderable::DisconnectFromParent()
{
	this->_parent = nullptr;
}

void Renderable::DisconnectChildren()
{
	this->_children.clear();
}

void Renderable::EraseChildren()
{
	for (auto i = 0; i < this->_children.size(); i++)
	{
		delete this->_children.at(i);
	}

	this->_children.clear();
}

int Renderable::numberOfMe = 0;

void Renderable::CommonConstructor()
{
	this->ID = rand();
	this->_canBeDrawed = true;
	this->_canRecieveUpdate = true;
	this->_dimension = Vector2i(50, 50);

	numberOfMe++;
	cout << Renderable::numberOfMe << endl;
		
}

void Renderable::DrawChildren()
{
	for (auto i = 0; i < this->_children.size(); i++)
	{
		this->_children.at(i)->Render();
	}
}

void Renderable::UpdateChildren()
{
	for (auto i = 0; i < this->_children.size(); i++)
	{
		this->_children.at(i)->Update();
	}
}

Renderable::~Renderable()
{
	delete _parent;
	delete _drawable;	
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
	if (this->_canBeDrawed && this->_drawable)
	{
		if (!this->_children.empty())
		{
			for(auto i = 0; i < this->_children.size(); i ++)
			{
				this->DrawChildren();
			}
		}

		if (this->_window)
		{
			this->_window->draw(*this->_drawable);
		}	

	}
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

void Renderable::SetPosition(int x, int y)
{
	this->_position.x = x;
	this->_position.y = y;
}

void Renderable::SetDimension(int x, int y)
{
	this->_dimension.x = x;
	this->_dimension.y = y;
}


void Renderable::SetID(int ID)
{
	this->ID = ID;
}

RenderWindow* Renderable::GetRenderWindow()
{
	return this->_window;
}


void Renderable::SendEvent(Event& event)
{
	cout << "Object: " << this->ID << " recieved event: " << event.type << endl;
}

