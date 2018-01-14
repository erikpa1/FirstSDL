#include "Orders.h"
#include "BrainBuffer.h"


Orders::Orders(string type)
{
	this->_type = type;
	BrainBuffer brainBuff;
	brainBuff.BuffBrain(this->_type, this->_dictionary);

}


Orders::~Orders()
{
}

void Orders::AddSynonym(string string)
{
}

void Orders::DoMyWork()
{
}

bool Orders::ChceckVocabulary(string word)
{
	for(int i = 0; i < this->_dictionary.size(); i++)
	{
		if (this->_dictionary.at(i).compare(word))
		{
			return true;
		}
		
		
	}

	return false;
}
