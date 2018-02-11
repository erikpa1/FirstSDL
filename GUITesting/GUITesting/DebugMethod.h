#pragma once
#include <string>

#include "Buton.h"

using namespace std;
class DebugMethod
{
public:

	DebugMethod(string name, int methodID);
	~DebugMethod();

	void ActivateFlow();
	void DeactivateFlow();
	void Rendraw(sf::RenderWindow &window);

private:

	int _methodID;
	Buton *_button;
	string _name;
	

};

