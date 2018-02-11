#pragma once

#define LEFTCLICK 1;


class IEventAcceptable
{
public:
	virtual void SendEvent(int i) = 0;
};
