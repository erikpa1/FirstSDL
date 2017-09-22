#include "Animation.h"



Animation::Animation(rectangles* animatedRect, int animationSpeed)
{

	this->animatedObject = animatedRect;
	this->speedOfAnimation = new int(animationSpeed);


}


Animation::~Animation()
{


}

void Animation::disableAnimating()
{
	delete this->canAnimate;
	this->canAnimate = new bool(true);
	
}

void Animation::enableAnimating()
{	
	delete this->canAnimate;
	this->canAnimate = new bool(true);
}



