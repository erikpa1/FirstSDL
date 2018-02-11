#pragma once
#include <windows.h>
#include <string>

using namespace std;

class PipeServer
{

public:

	PipeServer();
	~PipeServer();
	void Read(string &buffedString);
	void Write(string toWrite);

private: 

	HANDLE _hPipe;
	OVERLAPPED oConnect;
	
};
