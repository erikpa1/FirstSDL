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

	SDL_Event& localEvent = this->mainWindow->getEvent();

	switch (localEvent.type) {


	case SDL_QUIT:
		this->mainWindow->stopWindowRun();
		std::cout << "Nastal event: " << localEvent.type << std::endl;
		break;

	default:
		break;

	}
	
}





