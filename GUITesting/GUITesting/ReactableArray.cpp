#include "ReactableArray.h"

void ReactableArray::SendEvent(Event& event)
{		
	for (auto i = _objects.begin(); i != this->_objects.end(); ++i)
	{
		(*i)->SendEvent(event);
	}
}

void ReactableArray::RegisterObject(IEventAcceptable& object)
{
	this->_objects.insert(&object);
}

void ReactableArray::UnregisterObject(IEventAcceptable& object)
{
	this->_objects.erase(&object);
}
