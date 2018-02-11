#pragma once
#include "IEventAcceptable.h"
#include "SFML/Graphics.hpp"
#include <map>




using namespace sf;
using namespace std;

class EventPack
{
	
public:
	
	EventPack();
	~EventPack();

	void EventAccepted(Event &event);

	void SetOnLeftClick(IEventAcceptable &obj);
	void SetOnRightClick(IEventAcceptable &obj);
	void SetOnPress(IEventAcceptable &obj);
	void SetOnUnpress(IEventAcceptable &obj);
	void SetOnKeyPressed(IEventAcceptable &obj, char key);

	Event &GetRecentEvent() { return *_recentEvent; };


private:

	Event * _recentEvent;
	map<int, IEventAcceptable&> map;

	
};
