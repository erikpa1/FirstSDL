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
	void Render();
	void SetFontColor(int r, int g, int b, int a);
	void SetText(std::string text);
	void EventHappened(sf::Event event) override;

	std::string GetButtonText() { return _buttonText.GetText().getString(); };

private:

	Label _buttonText;
	sf::Image _image;
	


	

};

