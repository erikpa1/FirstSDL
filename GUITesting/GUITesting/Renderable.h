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
	virtual void SetRenderer(sf::RenderWindow *window);
	virtual void SetPosition(sf::Vector2f newPosition);
	virtual void SetDimension(sf::Vector2f newDimension);
	virtual void HandleEvents(int event);
	virtual sf::Vector2f GetPosition() const { return _position; };
	virtual sf::Vector2f GetDimension() const { return _dimension; };

	//Drawing controlling
	void ChangeDrawinStatus(bool value);
	void ChangeUpdateStatus(bool value);
	
	void SetID(signed int ID);
	signed int GetID();

	//Parent attributes
	sf::RenderWindow *GetRenderWindow();
	bool GetDrawingState() { return _canBeDrawed; };
	bool GetUpdateState() { return _canRecieveUpdate; };

	void AddChild(Renderable *child);
	void SetParent(Renderable *parent);
	void DisconnectFromParent();
	void DisconnectChildren();
	void EraseChildren();

	static sf::Vector2f GetMiddlePostion(const Renderable &parent, const Renderable &child);
	
protected:
	
	inline void DrawChildren();
	inline void UpdateChildren();

	std::vector<Renderable*> _children;
	Renderable* _parent;
	sf::RenderWindow *_window;
	sf::Drawable *_drawable;
	sf::Vector2f _position;
	sf::Vector2f _dimension;	

	bool _canBeDrawed;
	bool _canRecieveUpdate;

	signed int ID;


private:
	void CommonConstructor();

};

