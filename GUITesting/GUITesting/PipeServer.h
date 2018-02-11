#pragma once
#include <windows.h>
#include <string>

using namespace std;

class PipeServer
{

public:

	PipeServer(string pipename);
	~PipeServer();

	void Read(string &buffedString);
	void Write(string toWrite);
	void Disconect();

private: 

	HANDLE _hPipe;
	OVERLAPPED oConnect;
	
};
