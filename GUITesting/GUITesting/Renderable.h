#pragma once

#include "SFML/Graphics.hpp"



class Renderable
{

public:

	Renderable(const sf::RenderWindow *window);
	Renderable(const sf::RenderWindow *window, const sf::Vector2f universal);
	Renderable(const sf::RenderWindow *window, const sf::Vector2f position, const sf::Vector2f dimension);
	~Renderable();

	virtual void Start() = 0;
	virtual void Update();
	virtual void Render();


	void ChangeDrawinStatus(bool value);
	void ChangeUpdateStatus(bool value);
	void setID(signed int ID);
	signed int GetID();

protected:

	void CommonContructior();

	sf::RenderWindow *_window;
	sf::Drawable *_drawable;
	sf::Vector2f position;
	sf::Vector2f dimension;
	

	bool _canBeDrawed;
	bool _canRecieveUpdate;

	signed int ID;




};

