#pragma once
#include "Znak.h"
#include "Zapisovac.h"

#include <iostream>


using namespace std;



int main()
{

	Znak a('d');
	Znak b('b');
		
	Znak c = a / b; 


	cout << c.getZnak() << endl;
	Zapisovac::zapis(c.getZnak());
	
	return 0;

}