#pragma once
#include <vector>
#include <string>

using namespace std;

class BrainBuffer
{
public:
	BrainBuffer();
	~BrainBuffer();
	
	void BuffBrain(string &type, vector<string> &brainPart);
};

