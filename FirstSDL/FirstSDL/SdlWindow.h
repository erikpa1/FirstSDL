#pragma once

#include <iostream>
#include <SDL.h>
#include <SDL_main.h>
#include "structureDefinition.h"

class SdlWindow
{
public:

	SdlWindow(const char* title, int xSize, int ySize);
	~SdlWindow();



	//main classes of program for rendering cycles
	void render();
	void cleanup();
	void stopWindowRun();
	void update();

	//backgroud of the program
	void changeBackGroundColor(int r, int b, int g, int a);

	//atribute which ends up the cycle
	bool getRunningState();

	//returns sizes of window
	int* getWindowWidth();
	int* getWindowHeight();
	
	SDL_Event getEvent();
	
	rectangles* getRectangle();


private: 

	bool isRunning;

	colorVector actualColor;
	rectangles basicRectangle;


	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* event;
	SDL_Texture* texture;

	SDL_Surface* surf;
	SDL_Rect* rectSource;
	SDL_Rect* rectDestination;

	int* windowWidth;
	int* windowHeight;
	
	

};

