#pragma once

#include "SDLWindow.h"

#include "structureDefinition.h"

#include "Animation.h"
#include "TetrisAnimation.h"
#include "GoniometricAnimation.h"
#include "SinCosAnimation.h"
#include "TangCotgAnimation.h"

#include <SDL.h>
#include <SDL_main.h>


class LevelController
{
public:

	
	LevelController();
	~LevelController();
	
	void run();

private:

	SdlWindow* mainWindow;
	Animation* animation;

	void handleEvent();
	void animationChanger();
	

};

