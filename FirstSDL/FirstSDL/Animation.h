#pragma once
#include "SDL2-2.0.5\include\SDL_main.h"
#include "SDL2-2.0.5\include\SDL.h"
#include "structureDefinition.h"
#include <iostream>


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


