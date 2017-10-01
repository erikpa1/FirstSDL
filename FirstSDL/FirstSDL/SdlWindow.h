#pragma once



#include <iostream>
#include <SDL.h>
#include <SDL_main.h>
#include <vector>

#include "structureDefinition.h"
#include "BasicItem.h"




using namespace std;


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
	void addAnimableObject(BasicItem item);

	//backgroud of the program
	void changeBackGroundColor(int r, int b, int g, int a);

	//atribute which ends up the cycle
	bool getRunningState();

	//returns sizes of window
	int* getWindowWidth();
	int* getWindowHeight();
	
	SDL_Event getEvent();
	SDL_Renderer* getRenderer();
	
	


private: 

	bool isRunning;

	vector<BasicItem>* animableObjects;

	colorVector actualColor;
	rectangles basicRectangle;

	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* event;

	

	int* windowWidth;
	int* windowHeight;
	
	

};

