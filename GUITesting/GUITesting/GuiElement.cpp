#include "GuiElement.h"
#include <iostream>

GuiElement::GuiElement(int x, int y, int w, int h) : Renderable(x, y, w, h)
{
}

GuiElement::~GuiElement()
{
}

bool GuiElement::WasClicked(int x, int y)
{
	if ((this->GetPositionX() <= x) && (x <= (this->GetDimensionX() + this->GetPositionX())) && ((this->GetPositionY() <= y) && (y <= this->GetDimensionY() + this->GetDimensionY())))
	{
		return true;
	}
	return false;
}


void GuiElement::SetAligment(POSE pose, const Renderable& parent, Renderable& child)
{

	int x = parent.GetPositionX();
	int y = parent.GetPositionY();

	switch (pose)
	{
		case MIDDLE:
		
			x += (parent.GetDimensionX() / 2) - child.GetDimensionX() / 2;
			y += (parent.GetDimensionY() / 2) - child.GetDimensionY();
			child.SetPosition(x, y);
			break;
		case LEFT:				
			y += (parent.GetDimensionY() / 2) - child.GetDimensionY();
			child.SetPosition(x, y);
			break;
	}
	

}

void GuiElement::setOnClick(IEventAcceptable& onClick)
{

}

