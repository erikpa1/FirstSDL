#include "SdlWindow.h"



SdlWindow::SdlWindow(const char* title, int xSize, int ySize)
{


	this->isRunning = new bool(true);

	// initializing basic color
	this->actualColor.r = 0;
	this->actualColor.b = 0;
	this->actualColor.g = 0;
	this->actualColor.a = 255;
	
	this->windowWidth = new int(xSize);
	this->windowHeight = new int(ySize);


	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "Error" << std::endl;
	}

	this->window = SDL_CreateWindow(title, 50, 50, xSize, ySize, SDL_WINDOW_RESIZABLE);	
	this->renderer = SDL_CreateRenderer(window, -1, 0);
	//this->renderableObjects = new std::vector<BasicItem>();
	//this->clickAbleObjects = new std::vector<Button>();



	
}

SdlWindow::~SdlWindow()
{
}

void SdlWindow::render()
{	
	
	SDL_SetRenderDrawColor(this->renderer, this->actualColor.r, this->actualColor.b, this->actualColor.g, this->actualColor.a);	
	SDL_RenderClear(this->renderer);



	//if (!this->renderableObjects->empty()) {
	//	for (signed int i = 0; i < this->renderableObjects->size(); i++) {
	//		std::cout << "Vypis " << this->renderableObjects->at(i).getRenderingBool() << std::endl;
	//		this->renderableObjects->at(i).draw();						
	//	}
	//}
	

	if (!this->renderableObjects.empty()) {
		for (signed int i = 0; i < this->renderableObjects.size(); i++) {
			std::cout << "Vypis " << this->renderableObjects.at(i).getRenderingBool() << std::endl;
			this->renderableObjects.at(i).draw();
		}
	}

	SDL_RenderPresent(this->renderer);

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

void SdlWindow::pauseRendering(int milis)
{
	SDL_Delay(milis);
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
	

}

bool SdlWindow::getRunningState()
{
	return isRunning;
}

SDL_Event SdlWindow::getEvent()
{		
	return *this->event;
}

int* SdlWindow::getWindowWidth() {
	
	SDL_GetWindowSize(this->window, this->windowWidth, NULL);	
	return this->windowWidth;
	
	
}

int* SdlWindow::getWindowHeight() 
 {
	
	SDL_GetWindowSize(this->window, NULL, this->windowHeight);
	return this->windowHeight;

	
}


SDL_Renderer* SdlWindow::getRenderer() 
{
	return this->renderer;
		
}

void SdlWindow::addAnimableObject(BasicItem* item)
{
	
	this->renderableObjects.push_back(*item);
}

void SdlWindow::addClickableObject(Button* item)
{
	this->renderableObjects.push_back(*item);
	this->clickAbleObjects.push_back(*item);
	
}

void SdlWindow::checkButtons(int x, int y)
{

	if (!this->clickAbleObjects.empty()) {
		for (signed int i = 0; i < this->clickAbleObjects.size(); i++) {
			
			this->clickAbleObjects.at(i).wasClicked(x, y);
			
		}
	}

}


