#pragma once

#include "SDLWindow.h"
#include "Animation.h"
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
	

};

