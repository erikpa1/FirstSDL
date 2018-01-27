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

private:

	int _methodID;
	string _name;
	Buton _button;

};

