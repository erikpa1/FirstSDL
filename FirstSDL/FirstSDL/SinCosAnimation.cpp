#include "SinCosAnimation.h"
#include "structureDefinition.h"



SinCosAnimation::SinCosAnimation(rectangles* animatedRect, int animationSpeed, int chartHeight, int chartWidth, int type) : GoniometricAnimation(animatedRect, animationSpeed, chartHeight, chartWidth)
{
	this->type = new int(type);
}


SinCosAnimation::~SinCosAnimation()
{

}

void SinCosAnimation::animate()
{
	this->animatedObject->source->x += *this->speedOfAnimation;
	this->animatedObject->source->x %= 800;

	switch (*this->type) {
	case SINUS:
		this->animatedObject->source->y = (int)(sin(this->animatedObject->source->x / *this->chartWidth) * *this->chartHeight) + 400;
		break;
	case COSINUS:
		this->animatedObject->source->y = (int)(cos(this->animatedObject->source->x / *this->chartWidth) * *this->chartHeight) + 400;
		break;
	default:
		std::cerr << "I dont know this type of animation";


	}
	

}