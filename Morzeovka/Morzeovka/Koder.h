#pragma once
#include <vector>
#include <string>



class Koder
{
public:
	Koder();
	~Koder();

	void zakoduj(std::string slovo);
	bool precitajZoSuboru(std::string nazovSuboru);
	void vypis();
	void zapisDoSuboru();
	
	
private:

	std::vector<std::string> slovnaSekvencia;
	std::string getMorse(char a);




};

