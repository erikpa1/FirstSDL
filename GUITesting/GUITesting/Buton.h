#pragma once

#include "Renderable.h"
#include "IEventAcceptable.h"
#include "Label.h"

using namespace sf;

class Buton : public Renderable
{
public:
	
	Buton();
	Buton(int x, int y, int w, int h);
	~Buton();

	void Start();
	void Update();		
	void SendEvent(Event& event) override;
	void SetPosition(int x, int y);
	void SetDimension(int x, int y);
	void Render();
	void SetRenderer(RenderWindow* window);
	void SetFontColor(int r, int g, int b, int a = 255);
	void SetText(string text);	
	void CopyLabelStyle(Label *label);
	void setColor(int r, int g, int b, int a = 255);

	Label *GetLabel();

	std::string GetButtonText() { return _buttonText.GetText().getString(); };

private:

	void CommonConstructor();	
	Label _buttonText;

	sf::Image _image;
	sf::RectangleShape *_backgroundShape;

	


	

};

