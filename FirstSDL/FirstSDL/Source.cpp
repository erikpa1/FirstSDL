#include <stdio.h>
#include <stdlib.h>
#include "LevelController.h"




int main(int, char**) {

	/*
	LevelController* controller = new LevelController();
	controller->run();
	*/

	SdlWindow* wind = new SdlWindow("new window", 800, 600);

	while (true) {
		wind->render();
		wind->getEvent();
	}

	
	
	
	
	return 0;
}