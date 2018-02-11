#include "PipeClient.h"
#include <iostream>

#define BUFSIZE 512;

using namespace std;

PipeClient::PipeClient(string pipename)
{		
	string help = "\\\\.\\pipe\\" + pipename;
	this->_hpipe = CreateFile(help.c_str(), GENERIC_READ | GENERIC_WRITE, 0, NULL, OPEN_EXISTING, 0, NULL);
	DWORD temp = PIPE_READMODE_MESSAGE;	
	SetNamedPipeHandleState(this->_hpipe, &temp , NULL, NULL);
	
	if (this->_hpipe != INVALID_HANDLE_VALUE);
	cout << "FAIL TO CREATE CONNECTION";
	
}

PipeClient::~PipeClient()
{
}

void PipeClient::SendMassage(string massage)
{
	DWORD temp = PIPE_READMODE_MESSAGE;
	bool succesFullWrite = WriteFile(this->_hpipe, massage.c_str(), massage.length(), &temp, NULL);
}

void PipeClient::ReadMassage(string& stringToBuff)
{
	TCHAR  chBuf[512];
	DWORD size = BUFSIZE;
	bool succesOfRead = ReadFile(this->_hpipe, chBuf, sizeof(TCHAR), &size , NULL);

}


