#pragma once
#include <set>
#include "IEventAcceptable.h"
#include "SFML/Graphics.hpp"

using namespace std;
using namespace sf;

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
