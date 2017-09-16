#include "Animation.h"



Animation::Animation(rectangles* animatedRect)
{
	this->window = window;
	this->animatedObject = animatedRect;

	this->canAnimate = new bool(true);
	this->goingDown = new bool(true);
	this->goingUp = new bool(false);
	this->goingRight = new bool(true);
	this->goingLeft = new bool(false);

}


Animation::~Animation()
{

	delete this->goingDown;
	delete this->goingUp;
	delete this->goingRight;
	delete this->goingLeft;
}

void Animation::disableAnimating()
{
	delete this->canAnimate;
	this->canAnimate = new bool(false);
}

void Animation::enableAnimating()
{
	delete this->canAnimate;
	this->canAnimate = new bool(true);
}

void Animation::animate()
{

	
	

}