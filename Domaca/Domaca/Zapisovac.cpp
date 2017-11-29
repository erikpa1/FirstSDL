#include "Zapisovac.h"
#include <fstream>

using namespace std;


void Zapisovac::zapis(char vysledok)
{
	ofstream file;
	file.open("output.txt");

	file << vysledok;

	file.close();
}
