#include "TangCotgAnimation.h"



TangCotgAnimation::TangCotgAnimation(rectangles* animatedRect, int animationSpeed, int chartHeight, int chartWidth, int type) : GoniometricAnimation(animatedRect, animationSpeed, chartHeight, chartWidth)
{
	this->type = new int(type);
}


TangCotgAnimation::~TangCotgAnimation()
{
}

void TangCotgAnimation::animate()
{
	this->animatedObject->source->x += *this->speedOfAnimation;
	this->animatedObject->source->x %= 800;

	switch (*this->type) {
	case TANGENS:
		this->animatedObject->source->y = (int)(tan(this->animatedObject->source->x / *this->chartWidth) * *this->chartHeight) + 400;
		break;
	case COTANGES:
		this->animatedObject->source->y = (int)(tan(this->animatedObject->source->x / *this->chartWidth) * *this->chartHeight) + 400;
		break;
	default:
		std::cerr << "I dont know this type of animation";


	}

}