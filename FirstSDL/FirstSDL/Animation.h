#pragma once
#include <SDL.h>
#include <SDL_main.h>
#include "SdlWindow.h"

class Animation
{
	
public:

	Animation(rectangles* animatedRectangles, int animationSpeed);
	~Animation();
	bool* canAnimate;

	virtual void animate() = 0;
	void disableAnimating();
	void enableAnimating();
	void sendDown();

	int* speedOfAnimation;
	rectangles* animatedObject;

	

};


