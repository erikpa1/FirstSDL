#pragma once
#include <iostream>
#include <fstream>



class FileWriter
{
public:
	FileWriter();
	~FileWriter();
	void writeData(char* text);

private:
	char *filePaht;
};

