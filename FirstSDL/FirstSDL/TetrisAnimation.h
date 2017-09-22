#pragma once
#include "Animation.h"
class TetrisAnimation : public Animation
{

public:

	TetrisAnimation(rectangles* animatedRect, int animationSpeed);
	~TetrisAnimation();
	
	void Animation::animate();

private:
	
	bool* goingRight;
	bool* goingLeft;
	bool* goingUp;
	bool* goingDown;


};

