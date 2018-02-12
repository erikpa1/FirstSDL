#pragma once

#include "SFML/Graphics.hpp"
#include <vector>


using namespace sf;
using namespace std;

class Renderable
{

public:

	//Renderable(Renderable &parent);
	Renderable();
	Renderable(int x, int y, int w, int h);
	~Renderable();


	//Basic rendering voids
	virtual void Start();
	virtual void Update();	
	virtual void Render();	
	virtual void SetRenderer(sf::RenderWindow *window);
	virtual void SetPosition(int x, int y);
	virtual void SetDimension(int x, int y);
	virtual void SendEvent(Event &event);
	void AddChild(Renderable *child);
	void SetParent(Renderable *parent);
	void DisconnectFromParent();
	void DisconnectChildren();
	void EraseChildren();
	void ChangeDrawinStatus(bool value);
	void ChangeUpdateStatus(bool value);
	void SetID(signed int ID);	
	
	virtual int GetPositionX() const { return _position.x; }
	virtual int GetPositionY() const { return _position.x; }
	virtual int GetDimensionX() const { return _dimension.x; }
	virtual int GetDimensionY() const { return _dimension.y; }
	signed int GetID();

	
	bool GetDrawingState() { return _canBeDrawed; }
	bool GetUpdateState() { return _canRecieveUpdate; }

   
	RenderWindow *GetRenderWindow();
	//EventPack *GetEventPack() { return _events; }

protected:
	
	inline void DrawChildren();
	inline void UpdateChildren();
	
	Renderable* _parent;
	vector<Renderable*> _children;	
	RenderWindow *_window;
	Drawable *_drawable;
	Vector2i _position;
	Vector2i _dimension;	
	//EventPack *_events;

	bool _canBeDrawed;
	bool _canRecieveUpdate;

	signed int ID;


private:

	static int numberOfMe;
	void CommonConstructor();

};

