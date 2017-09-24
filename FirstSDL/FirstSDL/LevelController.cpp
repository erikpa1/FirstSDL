#include "LevelController.h"



LevelController::LevelController()
{

	this->mainWindow = new SdlWindow("SDL first", 900, 700);

	this->animation = new TetrisAnimation(this->mainWindow->getRectangle(), 1);
	//this->animation = new SinCosAnimation(this->mainWindow->getRectangle(), 1, 40, 20, COSINUS);
	//this->animation = new TangCotgAnimation(this->mainWindow->getRectangle(), 1, 100, 5, TANGENS);
	
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
		//SDL_Delay(500);
				
	}

	this->mainWindow->cleanup();
	

}

void LevelController::handleEvent()
{
	
	while (SDL_PollEvent(&this->mainWindow->getEvent())) {

		switch (this->mainWindow->getEvent().type) {

			case SDLK_KP_ENTER:
				//this->mainWindow->stopWindowRun();
				std::cout << "Enter pressed" << std::endl;
				break;

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

void LevelController::animationChanger()
{

}



