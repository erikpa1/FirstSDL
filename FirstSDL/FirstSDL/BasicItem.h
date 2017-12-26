#pragma once


#include "SDL_main.h"
#include "SDL.h"
#include "structureDefinition.h"
#include "Animation.h"
#include "OnMouseClick.h"
#include "EventHandler.h"



class Animation;


class BasicItem : private OnMouseClick

{
public:

	BasicItem(SDL_Renderer* renderer, int basicX, int basicY, int basicW, int basicH, int destinationX, int destinationY, int destinationW, int destinationH);
	BasicItem(SDL_Renderer* renderer, int univerzalX, int univerzalY, int univerzalW, int univerzalH);
	~BasicItem();

	rectangles* getRectangles() const;
	SDL_Surface* getSurface();
	SDL_Texture* getTexture();
	
	void draw();
	void update();
	void init();
	void addAnimation(Animation* animation);
	
	void OnMouseClick::onClick();

	void setRenderingBool(bool hodnota);

	bool getRenderingBool() { return canBeDrawed; };

private:
	
	rectangles* mainRectangle;
	SDL_Surface* surf;
	SDL_Texture* texture;
	SDL_Renderer* renderer;
	Animation* someAnimation;
	void switchRendering();


	bool canBeDrawed;	
	bool wasClicked;
	void commonConstructor(SDL_Renderer* renderer);


		

};

