#pragma once

#include "Renderable.h"
#include "MouseEvents.h"
#include "EventReactable.h"
#include "Label.h"


class Buton : public Renderable, EventReactable
{
public:
	
	Buton();
	Buton(const sf::Vector2f universal);
	Buton(const sf::Vector2f position, const sf::Vector2f dimension);
	~Buton();

	void Start();
	void Update();		
	void SetPosition(sf::Vector2f newPosition);
	void SetDimension(sf::Vector2f newDimension);
	void Render();
	void SetRenderer(sf::RenderWindow* window);
	void SetFontColor(int r, int g, int b, int a);
	void SetText(std::string text);
	void EventHappened(sf::Event event) override;
	void CopyLabelStyle(Label *label);

	Label *GetLabel();

	std::string GetButtonText() { return _buttonText.GetText().getString(); };

private:

	void CommonConstructor();	
	Label _buttonText;

	sf::Image _image;
	sf::Shape *_backgroundShape;

	


	

};

