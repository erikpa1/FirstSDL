#include "Animation.h"



Animation::Animation(rectangles* animatedRect)
{

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
	this->canAnimate = new bool(true);
}

void Animation::animate()
{
	std::cout << "X of rectangle " << this->animatedObject->destination->x << std::endl;
	std::cout << "Y of rectangle " << this->animatedObject->destination->y << std::endl;


	
	if (this->canAnimate) {
		if (this->animatedObject->destination->x <= 800) {
			//this->animatedObject->destination->x += 1;
			this->animatedObject->source->x += 1;
		}
		else {
			//this->animatedObject->destination->x -= 1;
			this->animatedObject->source->x -= 1;
		}
	
		
	}

	

	
	

}