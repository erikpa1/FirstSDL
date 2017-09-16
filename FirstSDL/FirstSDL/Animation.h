#pragma once
#include <SDL.h>
#include <SDL_main.h>
#include "SdlWindow.h"

class Animation
{
public:
	Animation(rectangles* animatedRectangles);
	~Animation();


	void animate();
	void disableAnimating();
	void enableAnimating();
	void sendDown();

private:

	bool* goingRight;
	bool* goingLeft;
	bool* goingUp;
	bool* goingDown;

	rectangles* animatedObject;

	SdlWindow* window;

	bool* canAnimate;

};


