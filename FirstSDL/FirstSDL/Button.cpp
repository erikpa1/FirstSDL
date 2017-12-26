#include "Button.h"
#include <iostream>


Button::Button(SDL_Renderer * renderer, int basicX, int basicY, int basicW, int basicH, int destinationX, int destinationY, int destinationW, int destinationH) : BasicItem(renderer, basicX, basicY, basicW, basicH, destinationX, destinationY, destinationW, destinationH)
{
	

}

Button::Button(SDL_Renderer * renderer, int univerzalX, int univerzalY, int univerzalW, int univerzalH) : BasicItem(renderer, univerzalX, univerzalY, univerzalW, univerzalH)
{


}

Button::~Button()
{
}

void Button::wasClicked(int x, int y)
{

	
	rectangles* help = BasicItem::getRectangles();

	if (((help->source->x <= x) && (x <= (help->source->w + help->source->x))) && ((help->source->y <= y) && (y <= help->source->h + help->source->y ))) {
		if (this->clickable)
		{
			//this->clickable->onClick();
		}
				
	}
	delete help;

}

void Button::addFunctionality(BasicItem* item)
{
	this->clickable = item;
}



void Button::commonConstructor()
{
	this->clickable = nullptr;
}

void Button::onClick()
{
	this->clickable->onClick();

	
}
