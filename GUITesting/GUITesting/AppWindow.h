#pragma once

#include <vector>

#include "Renderable.h"
#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"



using namespace std;
using namespace sf;

class AppWindow
{

public:

	AppWindow();
	~AppWindow();
	
	void IndependentStart();
	void Tick();
	void Pause();
	void Remove();
	void AddElement(Renderable *renderable);
	void TestingMethod();


	bool CanAcceptTick() const { return _window->isOpen() && _canWork;}
	int GetWindowPositionX() const { return _window->getPosition().x;};
	int GetWindowPositionY() const { return _window->getPosition().y; };

	RenderWindow *GetRenderWindow() { return _window; };

	
	
private:

	inline void particalTick();	
	inline void HandleEvents(Event &event);
	bool _canWork;

	vector<Renderable*> _renderableObjects;
	RenderWindow *_window;




};

