#pragma once
#include <vector>
#include <string>

#include "Orders.h"

using namespace std;

class EllaAi
{
public:
	EllaAi();
	~EllaAi();

	void AddOrder(string type);
	void AddWordToOrders(string orderType, string keyword);
	void CreateNewOrderFromWord();

	bool OrderRecieved(string word);
	

private:

	vector<Orders*> _orderList;

	




};

