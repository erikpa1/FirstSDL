#pragma once 
#include "PhysicsFlag.h"
#include "PhysicsController.h"
#include "StaticObjectPhysics.h"

class Physics {

public:
	Physics(PhysicsType type);

private: 

	PhysicsController *controller;


};
