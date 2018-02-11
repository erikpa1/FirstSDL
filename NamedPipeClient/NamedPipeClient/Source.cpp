#pragma once
#include <windows.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	HANDLE hPipe;
	DWORD dwWritten;

	hPipe = CreateFile(TEXT("\\\\.\\pipe\\test"),
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		OPEN_EXISTING,
		0,
		NULL);

	if (hPipe != INVALID_HANDLE_VALUE)
	{
		WriteFile(hPipe,
			"Hello Pipe\n",
			12,   // = length of string + terminating '\0' !!!
			&dwWritten,
			NULL);

		CloseHandle(hPipe);
	}


	return 0;
}