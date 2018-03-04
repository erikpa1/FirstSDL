#include <string>
#include <array>
#include <iostream>

#include "Polotovar.h"

using namespace std;

class BioFarmar
{

public:

	BioFarmar(string obchodneMeno, array<Polotovar, 5> tovary)
	{
		this->obchodneMeno = obchodneMeno;
		this->tovary = tovary;

	}

	void vypisSa()
	{
		cout << this->obchodneMeno << " ";


	}

private:

	string obchodneMeno;
	array<Polotovar, 5> tovary;

};