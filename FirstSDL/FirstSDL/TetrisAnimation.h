#pragma once
#include "Animation.h"
#include "MainParticle.h"
#include "ClickableObject.h"


class TetrisAnimation : public Animation

{

public:

	TetrisAnimation(rectangles* animatedRect, int animationSpeed, bool returnSequence);
	~TetrisAnimation();
	
	void Animation::animate();
	

private:

	bool returnSequence;
	
	bool goingRight;
	bool goingLeft;
	bool goingUp;
	bool goingDown;

	void animateWithBackSequance();
	void animateWithoutBackSequance();


};

