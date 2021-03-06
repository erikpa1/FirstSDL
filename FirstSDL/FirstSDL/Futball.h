#pragma once

#include "SDLWindow.h"

#include "structureDefinition.h"

#include "Animation.h"
#include "TetrisAnimation.h"
#include "GoniometricAnimation.h"
#include "SinCosAnimation.h"
#include "TangCotgAnimation.h"


#include "BasicItem.h"
#include "Button.h"


#include "SDL_main.h"
#include "SDL.h"

#include "EventHandler.h"

class Futball
{
public:
	Futball();
	~Futball();

	void run();


private:

	SdlWindow* mainWindow;

	void handleEvent();
	void animationChanger();
	void createNewObject();
	void createNewObject(int x, int y);
	void spawnParicle();
	void pencilDraw();
	void methodForThread();


};

