#include "BrainBuffer.h"

#include <fstream>


BrainBuffer::BrainBuffer()
{
}


BrainBuffer::~BrainBuffer()
{
}

void BrainBuffer::BuffBrain(string &type, vector<string>& brainPart)
{
	ifstream orderFile;
	orderFile.open(type.c_str());

	if(orderFile.is_open())
	{
		while (!orderFile.eof())
		{
			string help;
			orderFile >> help;
			brainPart.push_back(help);
			
		}
	}

	
}
