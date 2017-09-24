#include "GoniometricAnimation.h"

#include <math.h>


GoniometricAnimation::GoniometricAnimation(rectangles* animatedRect, int animationSpeed, int chartHeight, int chartWidth) : Animation(animatedRect, animationSpeed)
{
	this->chartHeight = new int(chartHeight);
	this->chartWidth = new int(chartWidth);
		
}


GoniometricAnimation::~GoniometricAnimation()
{
}
