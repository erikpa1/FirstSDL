#pragma once

#include "Renderable.h"
#include "MouseEvents.h"
#include "EventReactable.h"
#include "Label.h"

using namespace sf;

class Buton : public Renderable, EventReactable
{
public:
	
	Buton();
	Buton(int x, int y, int w, int h);
	~Buton();

	void Start();
	void Update();		
	void SetPosition(int x, int y);
	void SetDimension(int x, int y);
	void Render();
	void SetRenderer(sf::RenderWindow* window);
	void SetFontColor(int r, int g, int b, int a);
	void SetText(std::string text);
	void EventHappened(sf::Event event) override;
	void CopyLabelStyle(Label *label);
	void setColor(int r, int g, int b, int a = 255);

	Label *GetLabel();

	std::string GetButtonText() { return _buttonText.GetText().getString(); };

private:

	void CommonConstructor();	
	Label _buttonText;

	sf::Image _image;
	sf::Shape *_backgroundShape;

	


	

};

