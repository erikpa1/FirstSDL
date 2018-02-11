#pragma once
#include <windows.h>
#include <string>

using namespace std;

class PipeClient
{

public:
	PipeClient(string pipename);
	~PipeClient();

	void Write(string massage);
	void Read(string &stringToBuff);
	void Close();

private:

	HANDLE _hPipe;


	
};
