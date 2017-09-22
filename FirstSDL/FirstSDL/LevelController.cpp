#include "LevelController.h"



LevelController::LevelController()
{

	this->mainWindow = new SdlWindow("SDL first", 900, 700);	
	this->animation = new TetrisAnimation(this->mainWindow->getRectangle(), 10);
	
	
	
}


LevelController::~LevelController()
{
}

void LevelController::run()
{
	
	while (this->mainWindow->getRunningState()) {
		
		this->handleEvent();
		this->animation->animate();
		this->mainWindow->update();
		this->mainWindow->render();
		SDL_Delay(100);
				
	}

	this->mainWindow->cleanup();
	

}

void LevelController::handleEvent()
{
	
	while (SDL_PollEvent(&this->mainWindow->getEvent())) {

		switch (this->mainWindow->getEvent().type) {	

			case SDL_QUIT:
				this->mainWindow->stopWindowRun();
				std::cout << "Nastal event: " << this->mainWindow->getEvent().type << std::endl;
				this->mainWindow->stopWindowRun();
				break;
			case SDL_KEYDOWN:
				
				break;

			default:
				break;

			}


		}



}



