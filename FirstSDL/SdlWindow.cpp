#include "SdlWindow.h"



SdlWindow::SdlWindow(const char* title, int xSize, int ySize)
{

	
	this->isRunning = new bool(true);

	// initializing basic color
	this->actualColor.r = 0;
	this->actualColor.b = 0;
	this->actualColor.g = 0;
	this->actualColor.a = 255;

	/*
	this->windowWidth = new int(xSize);
	this->windowHeight = new int(ySize);
	*/


	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "Error" << std::endl;
	}

	this->window = SDL_CreateWindow(title, 500, 500, xSize, ySize, SDL_WINDOW_RESIZABLE);
	this->renderer = SDL_CreateRenderer(window, -1, 0);
	
	SDL_SetRenderDrawColor(renderer, this->actualColor.r, this->actualColor.b, this->actualColor.g, this->actualColor.a);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	this->event = new SDL_Event();
	this->surf = SDL_LoadBMP("SourceFiles/icon.bmp");
	this->texture = SDL_CreateTextureFromSurface(this->renderer, this->surf);
	

	this->basicRectangle.source->x = 0;
	this->basicRectangle.source->y = 0;
	this->basicRectangle.source->w = 100;
	this->basicRectangle.source->h = 100;
	

	this->basicRectangle.destination->x = 0;
	this->basicRectangle.destination->y = 0;
	this->basicRectangle.destination->w = 100;
	this->basicRectangle.destination->h = 100;


	SDL_FreeSurface(this->surf);
	SDL_QueryTexture(this->texture, NULL, NULL, &this->basicRectangle.source->w, &this->basicRectangle.source->h);
	
}


SdlWindow::~SdlWindow()
{
}

void SdlWindow::render()
{	
	
	SDL_SetRenderDrawColor(this->renderer, this->actualColor.r, this->actualColor.b, this->actualColor.g, this->actualColor.a);
	SDL_RenderClear(this->renderer);
	SDL_RenderCopy(this->renderer, this->texture, this->rectSource, this->rectSource);
	SDL_RenderPresent(this->renderer);
	std::cout << "Hallo" << std::endl;

}


void SdlWindow::cleanup()
{

	
	SDL_DestroyWindow(this->window);
	SDL_DestroyRenderer(this->renderer);
	SDL_Quit();



}

void SdlWindow::stopWindowRun()
{
	this->isRunning = false;
}

void SdlWindow::changeBackGroundColor(int r, int b, int g, int a)
{
	this->actualColor.r = r;
	this->actualColor.r = b;
	this->actualColor.r = g;
	this->actualColor.r = a;

	std::cout << r << " " << b << " " << g << std::endl;
	

	
}

void SdlWindow::update() 
{

	std::cout << "x: " << this->rectSource->x << " y: " << this->rectSource->y << std::endl;
	std::cout << "Window width: " << this->getWindowWidth() << " and height " << this->getWindowHeight() << std::endl;
	

}

bool SdlWindow::getRunningState()
{
	return isRunning;
}

SDL_Event SdlWindow::getEvent()
{

	return *this->event;
}

rectangles* SdlWindow::getRectangle()
{
	return &this->basicRectangle;
}

int* SdlWindow::getWindowWidth() {
	/*
	SDL_GetWindowSize(this->window, &this->windowWidth, NULL);	
	return &this->windowWidth;
	*/
	return new int(20);
	
}

int* SdlWindow::getWindowHeight() {
		
	/*
	SDL_GetWindowSize(this->window, NULL, &this->windowHeight);
	*/
	return new int(20);

}




