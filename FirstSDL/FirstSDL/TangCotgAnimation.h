#pragma once
#include "GoniometricAnimation.h"
#include "structureDefinition.h"

class TangCotgAnimation : public GoniometricAnimation
{
public:
	TangCotgAnimation(rectangles* animatedRect, int animationSpeed, int chartHeight, int chartWidth, int type);
	~TangCotgAnimation();

	void GoniometricAnimation::animate();

private:
	int* type;


};

