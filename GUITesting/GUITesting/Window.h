#pragma once

#include <vector>

#include "Renderable.h"
#include "SFML/Graphics.hpp"

using namespace std;

class Window
{

public:
	Window();
	~Window();
	
	void IndependentStart();
	void Tick();
	void Pause();
	void Remove();

	bool CanAcceptTick() const { return _window->isOpen() && _canWork;}
	sf::Vector2i GetWindowPosition() const { return _window->getPosition();};
	sf::Vector2u GetWindowDimension() const { return _window->getSize();};
	

private:

	inline void particalTick();
	void LeftClicked(int x, int y);

	
	void HandleEvents(sf::Event event);
	bool _canWork;

	vector<Renderable> _renderableObjects;
	sf::RenderWindow *_window;
	sf::RenderWindow _secondary;


};

