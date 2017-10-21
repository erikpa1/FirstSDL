#include "LevelController.h"



LevelController::LevelController()
{

	this->mainWindow = new SdlWindow("SDL first", 900, 700);	
	
	BasicItem* item = new BasicItem(this->mainWindow->getRenderer(), 10, 10, 10, 10);
	Animation* anim = new TetrisAnimation(item->getRectangles(), 5, false);
	item->addAnimation(anim);
	this->mainWindow->addAnimableObject(item);

	Button* btn = new Button(this->mainWindow->getRenderer(), 10, 10, 100, 50);
	btn->addFunctionality();
	this->mainWindow->addClickableObject(btn);


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
		this->mainWindow->pauseRendering(1000);
		
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
			case SDL_MOUSEBUTTONDOWN:

				switch (event->button.button)
				{
					case SDL_BUTTON_LEFT:
						//this->createNewObject(event->button.x, event->button.y);		
						this->mainWindow->checkButtons(event->button.x, event->button.y);
					break;
				}
				break;		
				
			
			default:
				break;

			}

		
		}

	int* x = NULL;
	int* y = NULL;

	SDL_GetMouseState(x, y);
	if (x != NULL)
	{
		std::cout << "Mouse x " << *x << " and y " << *y << std::endl;
	}
	


	delete event;

}

void LevelController::animationChanger()
{
	
}

void LevelController::createNewObject()
{

	BasicItem* newItem = new BasicItem(this->mainWindow->getRenderer(), 10, 10, 10, 10);
	newItem->addAnimation(new TetrisAnimation(newItem->getRectangles(), 10, false));
	this->mainWindow->addAnimableObject(newItem);

}

void LevelController::createNewObject(int x, int y)
{

	BasicItem* newItem = new BasicItem(this->mainWindow->getRenderer(), x, y, 10, 10);
	//newItem->addAnimation(new TetrisAnimation(newItem->getRectangles(), 10, true));
	this->mainWindow->addAnimableObject(newItem);

}

void LevelController::spawnParicle() {

	//MainParticle::doYourEffect(50, 50, 5);

}

void LevelController::pencilDraw()
{

}
