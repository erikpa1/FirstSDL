#include "TetrisAnimation.h"





TetrisAnimation::TetrisAnimation(rectangles* animatedRect, int animationSpeed) : Animation(animatedRect, animationSpeed)
{	
	this->canAnimate = new bool(true);
	this->goingDown = true;
	this->goingUp = false;
	this->goingRight = true;
	this->goingLeft = false;

}


TetrisAnimation::~TetrisAnimation()
{

}
	
/*
void TetrisAnimation::animate() 
{
    
	
	std::cout << "X of rectangle " << this->animatedObject->source->x << std::endl;
	std::cout << "Y of rectangle " << this->animatedObject->source->y << std::endl;


	if (*this->canAnimate) {

		if (*this->goingDown) {

			if (this->animatedObject->source->y >= 600) {				
				
				this->goingDown = new bool(false);
				this->goingUp = new bool(true);
				
			}
			else {
				this->animatedObject->source->y += *this->speedOfAnimation;
				std::cout << "going down " << *this->goingDown << std::endl;
				
			}
			
		}
		
		std::cout << "toto sa preskoci" << std::endl;

		if (*this->goingUp) {

			if (this->animatedObject->source->y <= 0) {
				
				this->goingDown = new bool(true);
				this->goingUp = new bool(false);
				
			}

			else {
				this->animatedObject->source->y -= *this->speedOfAnimation;
				std::cout << "going up " << *this->goingUp << std::endl;
			}
		}
		
		std::cout << "toto sa preskoci" << std::endl;
		
		if (*this->goingRight) {

			if (this->animatedObject->source->x >= 800) {
				this->goingRight = new bool(false);
				this->goingLeft = new bool(true);
			}
			else {
				this->animatedObject->source->x += *speedOfAnimation;
				std::cout << "going right " << *this->goingRight << std::endl;
			}

		} 
		
		if (*this->goingLeft) {

			if (this->animatedObject->source->x <= 0) {
				this->goingLeft = new bool(false);
				this->goingRight = new bool(true);
			}
			else {
				this->animatedObject->source->x -= *this->speedOfAnimation;
				std::cout << "going left " << *this->goingLeft << std::endl;
			
			}

		}
	
	}
	
}
*/

void TetrisAnimation::animate()
{
	
	std::cout << "X of rectangle " << this->animatedObject->source->x << std::endl;
	std::cout << "Y of rectangle " << this->animatedObject->source->y << std::endl;

	if (*this->canAnimate) {

		if (this->goingDown) {

			if (this->animatedObject->source->y >= 600) {				
				this->goingDown = false;			
				this->goingUp = true;
				
				int i = rand() % 2;
				switch (i) {
				case 0:				
					this->goingRight = true;
					this->goingLeft = false;
					break;
				case 1:				
					this->goingRight = false;
					this->goingLeft = true;
					break;
				}

			}
			else {
				this->animatedObject->source->y += *this->speedOfAnimation;
				std::cout << "going down " << this->goingDown << std::endl;

			}

		}

		std::cout << "toto sa preskoci" << std::endl;

		if (this->goingUp) {

			if (this->animatedObject->source->y <= 0) {

				this->goingDown = true;
				this->goingUp = false;

				int i = rand() % 2;
				switch (i) {
				case 0:			
					this->goingRight = true;
					this->goingLeft = false;
					break;
				case 1:			
					this->goingRight = false;
					this->goingLeft = true;
					break;
				}

			}

			else {
				this->animatedObject->source->y -= *this->speedOfAnimation;
				std::cout << "going up " << this->goingUp << std::endl;
			}
		}
			

		if (this->goingRight) {

			if (this->animatedObject->source->x >= 800) {
				this->goingRight = false;
				this->goingLeft = true;

				int i = rand() % 2;
				switch (i) {
				case 0:
					this->goingUp = new bool(true);
					this->goingDown = false;
					break;
				case 1:
					this->goingUp = false;
					this->goingDown = true; 
					break;
				}
			}
			else {
				this->animatedObject->source->x += *speedOfAnimation;
				std::cout << "going right " << this->goingRight << std::endl;
			}

		}

		if (this->goingLeft) {

			if (this->animatedObject->source->x <= 0) {
				this->goingLeft = false;
				this->goingRight = true;

				int i = rand() % 2;
				switch (i) {
				case 0:
					this->goingUp = true;
					this->goingDown = false;
					break;
				case 1:
					this->goingUp = false;
					this->goingDown = true;
					break;
				}
			}
			else {
				this->animatedObject->source->x -= *this->speedOfAnimation;
				std::cout << "going left " << this->goingLeft << std::endl;

			}

		}

	}

}
