#pragma once
#include <set>
#include "IEventAcceptable.h"

using namespace std;

class ReactableArray
{

public:

	ReactableArray();
	~ReactableArray();

	void SendEvent(Event &event);
	void RegisterObject(IEventAcceptable &object);
	void UnregisterObject(IEventAcceptable &object);

private:

	set<IEventAcceptable*> _objects;

	
};
