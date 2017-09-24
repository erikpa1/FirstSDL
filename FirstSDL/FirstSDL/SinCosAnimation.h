#pragma once
#include "GoniometricAnimation.h"
class SinCosAnimation : public GoniometricAnimation
{
public:
	SinCosAnimation(rectangles* animatedRect, int animationSpeed, int chartHeight, int chartWidth, int type);
	~SinCosAnimation();
	void GoniometricAnimation::animate();

private:
	int* type;
};

