#pragma once

#include "SFML/Graphics.hpp"


using namespace sf;
class IEventAcceptable
{
public:
	virtual void SendEvent(Event &event) = 0;
};
