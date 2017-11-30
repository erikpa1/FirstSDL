#include "Physics.h"


Physics::Physics(PhysicsType type)
{
	switch (type)
	{
	case STATIC:
		this->controller = new StaticObjectPhys();
		break;
	case KYNEMATIC:
		break;
	case DYNAMIC:
		break;
	default:
		break;
	}
}
