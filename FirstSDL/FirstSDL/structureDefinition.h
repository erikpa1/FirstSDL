#pragma once


struct colorVector {
	int r;
	int b;
	int g;
	int a;

};

struct rectangles {
	SDL_Rect* source = new SDL_Rect();
	SDL_Rect* destination = new SDL_Rect();
};
