#pragma once
#include <functional>
#include <SFML/System/Vector2.hpp>

class MouseEvents

{
public:

	MouseEvents();
	~MouseEvents();

	virtual void eventHappened(int eventID);
	virtual void onLeftClick(sf::Vector2u position);

private: 

	


};

