#include "Button.h"
#include <iostream>


Button::Button(SDL_Renderer * renderer, int basicX, int basicY, int basicW, int basicH, int destinationX, int destinationY, int destinationW, int destinationH) : BasicItem(renderer, basicX, basicY, basicW, basicH, destinationX, destinationY, destinationW, destinationH)
{


}

Button::Button(SDL_Renderer * renderer, int univerzalX, int univerzalY, int univerzalW, int univerzalH) : BasicItem(renderer, univerzalX, univerzalY, univerzalW, univerzalH)
{


}

Button::~Button()
{
}

void Button::wasClicked(int x, int y)
{

	rectangles* help = BasicItem::getRectangles();

	cout << "*****************" << endl;
	cout <<help->source->x<< " a " << help->source->y  << " rozmery " << help->source->w << " a " << help->source->h << endl;
	cout << x << " a " << y << endl;
	cout << "*****************" << endl;

	if (((help->source->x <= x) && (x <= (help->source->w + help->source->x))) && ((help->source->y >= y) )) {
	
		cout << "*****************" << endl;
		cout << "*               *" << endl;
		cout << "*               *" << endl;
		cout << "*****************" << endl;
		
	}

}
