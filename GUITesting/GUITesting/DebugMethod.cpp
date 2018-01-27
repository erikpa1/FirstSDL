#include "DebugMethod.h"


DebugMethod::DebugMethod(string name, int methodID)
{
	this->_name = name;
	this->_methodID = methodID;
	this->_button.SetText(this->_name);
}

DebugMethod::~DebugMethod()
{
}

void DebugMethod::ActivateFlow()
{
	this->_button.setColor(20, 20, 20);
}

void DebugMethod::DeactivateFlow()
{
	this->_button.setColor(20, 20, 20);
}
