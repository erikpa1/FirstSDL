#pragma once

#include <vector>

#include "Renderable.h"
#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"



using namespace std;

class AppWindow
{

public:
	AppWindow();
	~AppWindow();
	
	void IndependentStart();
	void Tick();
	void Pause();
	void Remove();
	void AddElement(Renderable *renderable, sf::Vector2f position);
	void TestingMethod();


	bool CanAcceptTick() const { return _window->isOpen() && _canWork;}
	sf::Vector2i GetWindowPosition() const { return _window->getPosition();};
	sf::Vector2u GetWindowDimension() const { return _window->getSize();};
	sf::RenderWindow *GetRenderWindow() { return _window; };

	

	
	
private:

	inline void particalTick();
	void LeftClicked(int x, int y);

	
	void HandleEvents(sf::Event event);
	bool _canWork;

	vector<Renderable*> _renderableObjects;
	sf::RenderWindow *_window;




};

