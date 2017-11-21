#pragma once



#include <iostream>
#include "SDL2\include\SDL_main.h"
#include "SDL2\include\SDL.h"


#include <vector>

#include "structureDefinition.h"
#include "BasicItem.h"
#include "Button.h"

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
	void pauseRendering(int milis);
	void update();
	void addAnimableObject(BasicItem* item);
	void addClickableObject(Button* item);
	void checkButtons(int x, int y);

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
	vector<Button>* clickAbleObjects;

	colorVector actualColor;
	rectangles basicRectangle;

	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* event;

	

	int* windowWidth;
	int* windowHeight;
	
	

};

