#pragma once

#include <SDL.h>
#include <SDL_main.h>

#include "structureDefinition.h"
#include "Animation.h"



class BasicItem

{
public:

	BasicItem(SDL_Renderer* renderer, int basicX, int basicY, int basicW, int basicH, int destinationX, int destinationY, int destinationW, int destinationH);
	BasicItem(SDL_Renderer* renderer, int univerzalX, int univerzalY, int univerzalW, int univerzalH);
	~BasicItem();

	rectangles* getRectangles() const;
	SDL_Surface* getSurface();
	SDL_Texture* getTexture();
	
	void draw();
	void addAnimation(Animation* animation);

private:
	
	rectangles* mainRectangle;
	SDL_Surface* surf;
	SDL_Texture* texture;
	SDL_Renderer* renderer;
	Animation* someAnimation;
	
	
	void commonConstructor(SDL_Renderer* renderer);


	
	

};

