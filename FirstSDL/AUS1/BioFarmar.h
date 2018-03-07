#include <string>
#include <array>
#include <iostream>

#include "Polotovar.h"

using namespace std;

class BioFarmar
{

public:

	BioFarmar(string obchodneMeno, string tovary)
	{
		this->obchodneMeno = obchodneMeno;
	

	}

	void vypisSa()
	{
		cout << this->obchodneMeno << " ";


	}

private:

	string obchodneMeno;
	array<Polotovar, 5> tovary;

};