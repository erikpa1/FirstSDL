#include "LevelController.h"



LevelController::LevelController()
{

	this->mainWindow = new SdlWindow("SDL first", 900, 700);

	
	BasicItem* item = new BasicItem(this->mainWindow->getRenderer(), 10, 10, 10, 10);
	Animation* anim = new TetrisAnimation(item->getRectangles(), 1, false);
	item->addAnimation(anim);
	this->mainWindow->addAnimableObject(*item);

	
}


LevelController::~LevelController()
{
}

void LevelController::run()
{
	
	while (this->mainWindow->getRunningState()) {
		
		this->handleEvent();		
		this->mainWindow->update();
		this->mainWindow->render();
		//SDL_Delay(500);
		
	}

	this->mainWindow->cleanup();
	

}

void LevelController::handleEvent()
{

	SDL_Event* event = new SDL_Event();

	while (SDL_PollEvent(event)) {

		/*
		std::cout << "*************" << std::endl;
		std::cout << "SDL prijalo nejaky event " << this->mainWindow->getEvent().type << std::endl;
		std::cout << "*************" << std::endl;
		*/

		switch (event->type) {

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

				this->createNewObject();
				std::cout << "KeyDownPressed pressed" << std::endl;
				

				break;

			case SDLK_KP_A:				
				//this->animation = new SinCosAnimation(this->mainWindow->getRectangle(), 1, 10, 10, SINUS);
				std::cout << "************************************Button A pressed" << std::endl;
				break;
			

			default:
				break;

			}

		
		}

	delete event;

}

void LevelController::animationChanger()
{

}

void LevelController::createNewObject()
{

	BasicItem* newItem = new BasicItem(this->mainWindow->getRenderer(), 10, 10, 10, 10);
	newItem->addAnimation(new SinCosAnimation(newItem->getRectangles(), 1, 10, 20, SINUS));
	this->mainWindow->addAnimableObject(*newItem);

}




