#pragma once


#include "SDL2-2.0.5\include\SDL_main.h"
#include "SDL2-2.0.5\include\SDL.h"
#include "structureDefinition.h"
#include "Animation.h"

class Animation;


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

