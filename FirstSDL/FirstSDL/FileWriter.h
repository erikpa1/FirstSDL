#pragma once
#include <iostream>
#include <fstream>

#include "SDL_rwops.h"

class FileWriter
{
public:
	FileWriter();
	~FileWriter();
	void writeData(char* text);

private:
	char *filePaht;
};

