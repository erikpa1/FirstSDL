#pragma once
#include "IEventAcceptable.h"
class TestObject : IEventAcceptable
{
public:
	TestObject();
	~TestObject();
	void SendEvent(int i) override;

};

