#pragma once
#include <SDL.h>
#include <SDL_main.h>
#include "SdlWindow.h"

class Animation
{

public:

	Animation(rectangles* animatedRectangles, int animationSpeed);
	~Animation();
	virtual void animate() = 0;
	
protected:

	
	bool* canAnimate;

	
	void disableAnimating();
	void enableAnimating();
	

	int* speedOfAnimation;
	rectangles* animatedObject;

	

};


