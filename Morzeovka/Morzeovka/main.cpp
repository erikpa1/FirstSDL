#pragma once

#include "Koder.h"
#include <iostream>
#include <algorithm>





int main()
{
	Koder kodovac;

	
	std::string subor;
	std::string str;

	std::cout << "Zo suboru alebo z konzoly? [s/k]" << std::endl;
	char a;
	
	std::cin >> a;
	std::cin.ignore();
	//std::cout << subor << std::endl;
	


    switch (a) {
	case 'k':
		std::cout << "Get text to translate" << std::endl;
		std::getline(std::cin, str);
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		kodovac.zakoduj(str);
		kodovac.vypis();
		kodovac.zapisDoSuboru();
		break;

	case 's':	
		std::cout << "Zadaj nazov subora" << std::endl;
		std::getline(std::cin, subor);		
		if (kodovac.precitajZoSuboru(subor))
		{
			kodovac.vypis();
			kodovac.zapisDoSuboru();
		}
		
		break;

	default:
		std::cout << "Undefined order" << std::endl;
		main();
		break;
	}

	



	return 0;
}