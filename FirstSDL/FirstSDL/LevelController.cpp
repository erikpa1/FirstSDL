#include "LevelController.h"


LevelController::LevelController()
{

	this->mainWindow = new SdlWindow("SDL first", 800, 600);
	this->animation = new Animation(this->mainWindow->getRectangle());
	
}


LevelController::~LevelController()
{
}

void LevelController::run()
{
	
	
	while (this->mainWindow->getRunningState()) {
		
		this->animation->animate();
		this->handleEvent();
		this->mainWindow->update();
		this->mainWindow->render();
		SDL_Delay(1000);
				
	}

	this->mainWindow->cleanup();
	

}

void LevelController::handleEvent()
{
	SDL_PollEvent(&this->mainWindow->getEvent());
	std::cout << "Nastal event: " << this->mainWindow->getEvent().type << std::endl;
	switch (this->mainWindow->getEvent().type) {

	case SDL_QUIT:
		this->mainWindow->stopWindowRun();
		
		break;
	case SDL_KEYDOWN:
		this->animation->sendDown();
		break;

	default:
		break;

	}

	this->animation->sendDown();
	
}





