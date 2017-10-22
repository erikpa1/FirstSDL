#include "BasicItem.h"




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
	this->canBeDrawed = new bool (true);	

}

SDL_Texture* BasicItem::getTexture()
{
	return this->texture;

}

void BasicItem::draw()
{

	if(*this->canBeDrawed) {		
		SDL_RenderCopy(this->renderer, this->texture, this->mainRectangle->destination, this->mainRectangle->source);
	}
	if ((this->someAnimation != nullptr)) {
		this->someAnimation->animate();
	}	
}


void BasicItem::addAnimation(Animation* animation)
{
	this->someAnimation = animation;
}

void BasicItem::setRenderingBool(bool hodnota)
{
	this->canBeDrawed = new bool(hodnota);
}

void BasicItem::onClick()
{	
	if (*this->canBeDrawed)
	{
		*this->canBeDrawed = false;
	}
	else {
		*this->canBeDrawed = true;
	}
	
		
}