#pragma once

#include "Renderable.h"
#include "MouseEvents.h"

class Buton// : public Renderable, MouseEvents
{
public:
	
	Buton(sf::RenderWindow *renderer);
	Buton(sf::RenderWindow *renderer, const sf::Vector2f universal);
	Buton(sf::RenderWindow *renderer, const sf::Vector2f position, const sf::Vector2f dimension);
	~Buton();

	void Start();
	void Update();	
	void Render();
};

