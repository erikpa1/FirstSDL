#include "EllaAi.h"



using namespace std;

EllaAi::EllaAi()
{

}


EllaAi::~EllaAi()
{
}

void EllaAi::AddOrder(string type)
{
	this->_orderList.push_back(new Orders(type));
}

bool EllaAi::OrderRecieved(string word)
{	

	for (int i = 0; i < this->_orderList.size(); i++)
	{
		if(this->_orderList.at(i)->ChceckVocabulary(word))
		{
			this->_orderList.at(i)->DoMyWork();
			return true;

		};

	}

	return false;


}



