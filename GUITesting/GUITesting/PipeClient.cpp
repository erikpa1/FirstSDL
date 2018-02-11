#include "PipeClient.h"
#include <iostream>


using namespace std;

PipeClient::PipeClient(string pipename)
{		
	this->_hPipe = CreateFile(TEXT("\\\\.\\pipe\\test"),
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		OPEN_EXISTING,
		0,
		NULL);


}

PipeClient::~PipeClient()
{
	CloseHandle(this->_hPipe);
}

void PipeClient::Write(string massage)
{

	DWORD dwWritten;

	if (this->_hPipe != INVALID_HANDLE_VALUE)
	{
		WriteFile(this->_hPipe,
			"Hello Pipe\n",
			12,   // = length of string + terminating '\0' !!!
			&dwWritten,
			NULL);
	
	}

}

void PipeClient::Read(string& stringToBuff)
{
}


