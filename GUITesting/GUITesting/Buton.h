#pragma once

#include "GuiElement.h"
#include "Label.h"

using namespace sf;

class Buton : public GuiElement
{
public:

	Buton(int x, int y, int w, int h);
	~Buton();

	void Start();
	void Update();		
	void SendEvent(Event& event);
	void SetPosition(int x, int y);
	void SetDimension(int x, int y);
	void Render();
	void SetRenderer(RenderWindow* window);
	void SetFontColor(int r, int g, int b, int a = 255);
	void SetText(string text);	
	void CopyLabelStyle(Label *label);
	void setColor(int r, int g, int b, int a = 255);

	Label *GetLabel();

	string GetButtonText() { return _buttonText.GetText().getString(); };

private:

	void CommonConstructor();	

	Label _buttonText;
	Image _image;
	RectangleShape *_backgroundShape;

	

};

