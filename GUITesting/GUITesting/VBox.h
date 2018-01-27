#pragma once
#include "Renderable.h"

class Renderable;

class VBox : public Renderable
{
public:

	VBox();
	~VBox();

	void addElement(Renderable &renderable);
	

};

