#pragma once
#include "GuiElement.h"
#include <string>

using namespace std;
using namespace sf;

class Label : public GuiElement
{
public:

	Label();
	Label(int x, int y, int w, int h, string text = "Default");
	~Label();

	void Start();
	void Update();
	void Render();
	void SetPosition(int x, int y);
	void SetDimension(int x, int y);	
	void SetText(std::string text);
	void SetButtonColor(int r, int g, int b, int a);

	Text GetText() const { return _actualText; };
	int GetDimensionX() const override;
	int GetDimensionY() const override;

private:	

	inline void CommonConstructor();
	Text _actualText;
	Font font;	


};

