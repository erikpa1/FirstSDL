#pragma once
#include "Animation.h"
class GoniometricAnimation : public Animation
{
public:
	GoniometricAnimation(rectangles* animatedRect, int animationSpeed);
	~GoniometricAnimation();
	void Animation::animate();
};

