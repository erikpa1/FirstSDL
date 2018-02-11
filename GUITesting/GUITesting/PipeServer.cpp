#include "PipeServer.h"
#include <iostream>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>


PipeServer::PipeServer(string pipename)
{
	string temp = "\\\\.\\pipe\\";
	temp += pipename;
	
	this->_hPipe = CreateNamedPipe(TEXT(temp.c_str()),
		PIPE_ACCESS_DUPLEX,
		PIPE_TYPE_BYTE | PIPE_READMODE_BYTE | PIPE_WAIT,  
		1,
		1024 * 16,
		1024 * 16,
		NMPWAIT_USE_DEFAULT_WAIT,
		NULL);
}

PipeServer::~PipeServer()
{
	DisconnectNamedPipe(this->_hPipe);
}


void PipeServer::Read(string& buffedString)
{
	DWORD dwRead;
	char buffer[1024];

	while (this->_hPipe != INVALID_HANDLE_VALUE)
	{
		if (ConnectNamedPipe(this->_hPipe, NULL) != FALSE) 
		{
			while (ReadFile(this->_hPipe, buffer, sizeof(buffer) - 1, &dwRead, NULL) != FALSE)
			{		
				buffer[dwRead] = '\0';				
				buffedString = buffer;			
			}
		}


	}
}

void PipeServer::Write(string toWrite)
{

}
