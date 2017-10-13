#pragma once

#include "SDLWindow.h"

#include "structureDefinition.h"

#include "Animation.h"
#include "TetrisAnimation.h"
#include "GoniometricAnimation.h"
#include "SinCosAnimation.h"
#include "TangCotgAnimation.h"

#include "MainParticle.h"

#include "BasicItem.h"

#include "SDL2\include\SDL_main.h"
#include "SDL2\include\SDL.h"


class LevelController
{
public:

	
	LevelController();
	~LevelController();
	
	void run();
	

private:

	SdlWindow* mainWindow;

	void handleEvent();
	void animationChanger();
	void createNewObject();
	void spawnParicle();
	

};

