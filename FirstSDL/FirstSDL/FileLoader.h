#pragma once
#include <iostream>
#include <fstream>


class FileLoader
{
public:
	FileLoader(char* address);
	~FileLoader();	

	void endWriting();
	
	char *getText();
	int getInt();


private:

	char *filePath;


};

