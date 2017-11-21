#include "FileLoader.h"

using namespace std;

FileLoader::FileLoader(char* address)
{
	this->filePath = address;

}


FileLoader::~FileLoader()
{
	
}

void FileLoader::endWriting()
{
	delete this;
}

char * FileLoader::getText()
{

	ifstream loader(this->filePath);
	char *a;
	loader >> a;
	loader.close();

	return a;
}

int FileLoader::getInt()
{
	int b =  0;
	
	ifstream loader(this->filePath);
	loader >> b;

	if (cin.good())
	{		
		int a;
		loader >> (int)a;
		loader.close();

		return a;
	}

	return -1;

	
}


