#pragma once

#include "BasicItem.h"


class Button : public BasicItem
{

public:
	Button(SDL_Renderer* renderer, int basicX, int basicY, int basicW, int basicH, int destinationX, int destinationY, int destinationW, int destinationH);
	Button(SDL_Renderer* renderer, int univerzalX, int univerzalY, int univerzalW, int univerzalH);
	~Button();

	void wasClicked(int x, int y);




private:

	

};

