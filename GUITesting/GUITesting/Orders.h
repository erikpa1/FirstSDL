#pragma once
#include <vector>
#include <string>

using namespace std;

class Orders

{

/*
* Class is order part of brain
*/

public:
	Orders(string type);
	~Orders();

	string &GetOrderType() { return _type; };

	bool TypeIsEqual(string phrase);

	void AddSynonym(string string);
	void DoMyWork();
	bool ChceckVocabulary(string word);


	
private:

	string _type;	
	vector<string> _dictionary;







};

