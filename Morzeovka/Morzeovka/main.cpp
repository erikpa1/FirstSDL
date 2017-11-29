#pragma once

#include "Koder.h"
#include <iostream>


int main()
{
	Koder kodovac;

	std::string str;
	std::getline(std::cin, str);

	kodovac.zakoduj(str);
	kodovac.vypis();
	kodovac.zapisDoSuboru();




	return 0;
}