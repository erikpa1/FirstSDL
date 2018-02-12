#pragma once

#include "IEventAcceptable.h"
#include "Renderable.h"
#include "Poses.h"



class GuiElement : public Renderable
{

public:	

	GuiElement(int x, int y, int w, int h);
	~GuiElement();	

	static void SetAligment(POSE pose, const Renderable &parent, Renderable &child);
	void setOnClick(IEventAcceptable& onClick);

	bool WasClicked(int x, int y);
	

protected:

	map<int, IEventAcceptable&> _events;


	


	
};
