#pragma once

#include "Renderable.h"
#include "MouseEvents.h"
#include "EventReactable.h"


class Buton : public Renderable, EventReactable
{
public:
	
	Buton();
	Buton(const sf::Vector2f universal);
	Buton(const sf::Vector2f position, const sf::Vector2f dimension);
	~Buton();

	void Start();
	void Update();	
	void Render();

	void OnClick(sf::Vector2f position) override;

};

