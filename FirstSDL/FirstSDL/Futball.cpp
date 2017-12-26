#include "Futball.h"



Futball::Futball()
{
	this->mainWindow = new SdlWindow("SDL first", 900, 700);
	this->createNewObject();

}


Futball::~Futball()
{
}

void Futball::run()
{
	while (this->mainWindow->getRunningState()) {


		this->handleEvent();
		this->mainWindow->update();
		this->mainWindow->render();
		this->mainWindow->pauseRendering(500);


	}

	this->mainWindow->cleanup();

}

void Futball::handleEvent()
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


		int* x = NULL;
		int* y = NULL;

		SDL_GetMouseState(x, y);
		if (x != NULL)
		{
			std::cout << "Mouse x " << *x << " and y " << *y << std::endl;
		}	
	}
	


	delete event;
}

void Futball::animationChanger()
{
}

void Futball::createNewObject()
{

	Button* item = new Button(this->mainWindow->getRenderer(), 200, 200, 50, 50);
	BasicItem* items = new BasicItem(this->mainWindow->getRenderer(), 200, 200, 50, 50);
	Animation* anim = new TetrisAnimation(item->getRectangles(), 1, true);
	this->mainWindow->addAnimableObject(items);
	
	items->addAnimation(anim);
	
	this->mainWindow->addAnimableObject(item);	
	item->addFunctionality(items);
	this->mainWindow->addClickableObject(item);


}

void Futball::createNewObject(int x, int y)
{
}

void Futball::spawnParicle()
{
}

void Futball::pencilDraw()
{
}

void Futball::methodForThread()
{
}
