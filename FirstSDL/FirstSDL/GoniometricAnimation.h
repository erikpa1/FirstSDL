#pragma once
#include "Animation.h"

class GoniometricAnimation : public Animation
{
public:
	GoniometricAnimation(rectangles* animatedRect, int animationSpeed, int chartHeight, int chartWidth);
	~GoniometricAnimation();
	virtual void Animation::animate() = 0;

protected:

	int* chartHeight;
	int* chartWidth;

};

