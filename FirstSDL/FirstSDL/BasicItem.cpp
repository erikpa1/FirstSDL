#include "BasicItem.h"

#include <iostream>


BasicItem::BasicItem(SDL_Renderer* renderer, int basicX, int basicY, int basicW, int basicH, int destinationX, int destinationY, int destinationW, int destinationH)
{

	this->commonConstructor(renderer);

	this->mainRectangle->source->x = basicX;
	this->mainRectangle->source->y = basicY;
	this->mainRectangle->source->w = basicW;
	this->mainRectangle->source->h = basicH;

	this->mainRectangle->destination->x = destinationX;
	this->mainRectangle->destination->y = destinationY;
	this->mainRectangle->destination->w = destinationW;
	this->mainRectangle->destination->h = destinationH;

}
BasicItem::BasicItem(SDL_Renderer* renderer, int univerzalX, int univerzalY, int univerzalW, int univerzalH)
{
	this->commonConstructor(renderer);

	this->mainRectangle->source->x = univerzalX;
	this->mainRectangle->source->y = univerzalY;
	this->mainRectangle->source->w = univerzalW;
	this->mainRectangle->source->h = univerzalH;

	this->mainRectangle->destination->x = 0;
	this->mainRectangle->destination->y = 0;
	this->mainRectangle->destination->w = univerzalW;
	this->mainRectangle->destination->h = univerzalH;

}


BasicItem::~BasicItem()
{
	delete this->someAnimation;
}

rectangles* BasicItem::getRectangles() const
{	
	return this->mainRectangle;

}

SDL_Surface* BasicItem::getSurface()
{
	return this->surf; 

}

void BasicItem::commonConstructor(SDL_Renderer* renderer)
{
	this->mainRectangle = new rectangles;
	this->surf = SDL_LoadBMP("SourceFiles/icon.bmp");		
	this->renderer = renderer;
	this->texture = SDL_CreateTextureFromSurface(this->renderer, this->surf);
	
	this->someAnimation = nullptr;

	this->canBeDrawed = true;
	this->wasClicked = true;

}

SDL_Texture* BasicItem::getTexture()
{
	return this->texture;

}

void BasicItem::draw()
{

	std::cout << this->canBeDrawed << std::endl;
	if (this->canBeDrawed) {
		SDL_RenderCopy(this->renderer, this->texture, this->mainRectangle->destination, this->mainRectangle->source);

	}

	
}

void BasicItem::update()
{
}

void BasicItem::init()
{
	this->switchRendering();
}


void BasicItem::addAnimation(Animation* animation)
{

	this->someAnimation = animation;
	std::cout << "I wasCalled " << animation->getAnimationSpeed() << std::endl;

	
}

void BasicItem::switchRendering()
{
	if (this->canBeDrawed)
	{
		this->canBeDrawed = false;
	}
	else {
		this->canBeDrawed = true;
	}

}


void BasicItem::setRenderingBool(bool hodnota)
{
	this->canBeDrawed = new bool(hodnota);

	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
	std::cout << "*************" << std::endl;
}

void BasicItem::onClick()
{
	std::cout << "Clicked" << std::endl;
		
}