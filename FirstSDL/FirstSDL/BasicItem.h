#pragma once


#include "SDL2\include\SDL_main.h"
#include "SDL2\include\SDL.h"
#include "structureDefinition.h"
#include "Animation.h"
#include "OnMouseClick.h"



class Animation;


class BasicItem : OnMouseClick

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
	void OnMouseClick::onClick();

private:
	
	rectangles* mainRectangle;
	SDL_Surface* surf;
	SDL_Texture* texture;
	SDL_Renderer* renderer;
	Animation* someAnimation;

	bool canBeDrawed;
	
	
	void commonConstructor(SDL_Renderer* renderer);


	
	

};

