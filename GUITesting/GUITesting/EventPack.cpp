#include "EventPack.h"



EventPack::EventPack()
{
}


EventPack::~EventPack()
{
}

void EventPack::EventHapenned(Event &event)
{
	
}

void EventPack::RegisterOnClick(function<void(int, int)> &function)
{
	this->_onclick = &function;
}
