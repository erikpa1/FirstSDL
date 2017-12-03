#pragma once 
#include "PhysicsFlag.h"
#include "PhysicsController.h"


class Physics {

public:
	Physics(PhysicsType type);

private: 

	PhysicsController *controller;


};
