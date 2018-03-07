#pragma once
#include <string>
#include "Polotovar.h"

using namespace std;

class Vozidlo
{

public:

	Vozidlo(string SPZ, Polotovar tovar);
	~Vozidlo();

private:

	string SPZ;
	int nosnost;
	int prevadzkoveNaklady;
	Polotovar typTovaru;




	
};