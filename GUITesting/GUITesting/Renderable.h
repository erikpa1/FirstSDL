#pragma once

#include "SFML/Graphics.hpp"
#include <vector>



class Renderable
{

public:

	//Renderable(Renderable &parent);
	Renderable();
	Renderable(const sf::Vector2f universal);	
	Renderable(const sf::Vector2f position, const sf::Vector2f dimension);
	~Renderable();


	//Basic rendering voids
	virtual void Start();
	virtual void Update();
	virtual void Render();

	//Parent controlling

	void SetRenderer(sf::RenderWindow *_window);
	void ParentInitialization(const sf::RenderWindow *window);

	//Drawing controlling
	void ChangeDrawinStatus(bool value);
	void ChangeUpdateStatus(bool value);

	//Object properties
	void setPosition(sf::Vector2f newPosition);
	void setID(signed int ID);
	signed int GetID();

	//Parent attributes
	sf::RenderWindow *getRenderWindow() { return _window; };
	sf::Vector2f &getPosition() { return _position; };
	sf::Vector2f &getDimension() { return _dimension; };
	bool GetDrawingState() { return _canBeDrawed; };
	bool GetUpdateState() { return _canRecieveUpdate; };

	void AddChild(Renderable *child);
	void AddParent(Renderable *parent);
	void DisconnectFromParent();
	void DisconnectChildren();
	void EraseChildren();
	
	

protected:

	void CommonContructior();
	inline void DrawChildren();
	inline void UpdateChildren();


	std::vector<Renderable*> _children;
	Renderable* _parent;
	sf::RenderWindow *_window;


	sf::Shape *_shape;

	sf::Vector2f _position;
	sf::Vector2f _dimension;	

	bool _canBeDrawed;
	bool _canRecieveUpdate;

	signed int ID;




};

