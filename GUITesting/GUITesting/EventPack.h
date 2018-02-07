#pragma once
#include <functional>
#include "SFML/Graphics.hpp"


using namespace std;
using namespace sf;

class EventPack
{
public:
	EventPack();
	~EventPack();

	void UnregisterEvents();
	void EventHapenned(Event &event);

	void RegisterOnClick(function<void(int, int)> &function);

private:

	function<void(int, int)> *_onclick;



	




};

