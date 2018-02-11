#include "EventPack.h"



EventPack::~EventPack()
{	
	
}

void EventPack::EventAccepted(Event& event)
{
	map[event.type].SendEvent(event.type);
}

void EventPack::SetOnLeftClick(IEventAcceptable& obj)
{
	map[Event::EventType::MouseButtonPressed] = obj;
}

void EventPack::SetOnRightClick(IEventAcceptable& obj)
{
	map[Event::EventType::MouseButtonPressed] = obj;
}

void EventPack::SetOnPress(IEventAcceptable& obj)
{
}

void EventPack::SetOnUnpress(IEventAcceptable& obj)
{
}

void EventPack::SetOnKeyPressed(IEventAcceptable& obj, char key)
{
}
