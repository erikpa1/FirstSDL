#include "TetrisAnimation.h"





TetrisAnimation::TetrisAnimation(rectangles* animatedRect, int animationSpeed) : Animation(animatedRect, animationSpeed)
{	
	this->canAnimate = new bool(true);
	this->goingDown = new bool(true);
	this->goingUp = new bool(false);
	this->goingRight = new bool(true);
	this->goingLeft = new bool(false);	

}


TetrisAnimation::~TetrisAnimation()
{

	delete this->goingDown;
	delete this->goingUp;
	delete this->goingRight;
	delete this->goingLeft;
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

		if (*this->goingDown) {

			if (this->animatedObject->source->y >= 600) {

				this->goingDown = new bool(false);
				this->goingUp = new bool(true);
				
				int i = rand() % 2;
				switch (i) {
				case 0:
					this->goingRight = new bool(true);
					this->goingLeft = new bool(false);
					break;
				case 1:
					this->goingRight = new bool(false);
					this->goingLeft = new bool(true);
					break;
				}

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

				int i = rand() % 2;
				switch (i) {
				case 0:
					this->goingRight = new bool(true);
					this->goingLeft = new bool(false);
					break;
				case 1:
					this->goingRight = new bool(false);
					this->goingLeft = new bool(true);
					break;
				}

			}

			else {
				this->animatedObject->source->y -= *this->speedOfAnimation;
				std::cout << "going up " << *this->goingUp << std::endl;
			}
		}
			

		if (*this->goingRight) {

			if (this->animatedObject->source->x >= 800) {
				this->goingRight = new bool(false);
				this->goingLeft = new bool(true);

				int i = rand() % 2;
				switch (i) {
				case 0:
					this->goingUp = new bool(true);
					this->goingDown = new bool(false);
					break;
				case 1:
					this->goingUp = new bool(false);
					this->goingDown = new bool(true);
					break;
				}
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

				int i = rand() % 2;
				switch (i) {
				case 0:
					this->goingUp = new bool(true);
					this->goingDown = new bool(false);
					break;
				case 1:
					this->goingUp = new bool(false);
					this->goingDown = new bool(true);
					break;
				}
			}
			else {
				this->animatedObject->source->x -= *this->speedOfAnimation;
				std::cout << "going left " << *this->goingLeft << std::endl;

			}

		}

	}

}
