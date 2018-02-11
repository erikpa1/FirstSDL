#pragma once
#include <windows.h>
#include <string>

using namespace std;

class PipeClient
{

public:
	PipeClient(string pipename);
	~PipeClient();
	void SendMassage(string massage);
	void ReadMassage(string &stringToBuff);

private:

	HANDLE _hpipe;


	
};
