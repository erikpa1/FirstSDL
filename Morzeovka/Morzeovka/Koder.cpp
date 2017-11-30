#include "Koder.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


Koder::Koder()
{
}


Koder::~Koder()
{
}

void Koder::zakoduj(std::string slovo)
{
	for (int i = 0; i < slovo.length(); i++)
	{
		this->slovnaSekvencia.push_back(this->getMorse(slovo.at(i)));
	}
	 
}

bool Koder::precitajZoSuboru(std::string nazovSuboru)
{
	ifstream file;
	file.open(nazovSuboru);
	std::stringstream ss;

	if (file.is_open()) {
		while (!file.eof()) {
			std::string pomoc;
			file >> pomoc;
			ss << pomoc;
			ss << " ";
		}

	}
	else {
		std::cout << "Nepodarilo sa otvorit subor" << std::endl;
		return false;
	}

	

	std::string help = ss.str();
	std::cout << help << std::endl;
	this->zakoduj(help);
	return true;

}

void Koder::vypis()
{
	for (int i = 0; i < this->slovnaSekvencia.size(); i++)
	{
		cout << this->slovnaSekvencia.at(i);
		cout << "/";
	}
}

void Koder::zapisDoSuboru()
{
	ofstream file;
	file.open("output.txt");


	for (int i = 0; i < this->slovnaSekvencia.size(); i++)
	{
		file << this->slovnaSekvencia.at(i);
		file << "/";

	}
	file.close();

}

std::string Koder::getMorse(char a)
{
	switch (a)
	{
	case 'A':
		return ".-";
	case 'B':
		return "-...";
	case 'C':
		return "-.-.";
	case 'D':
		return "-..";
	case 'E':
		return ".";
	case 'F':
		return "..-.";
	case 'G':
		return "--.";
	case 'H':
		return "....";
	case 'I':
		return "..";
	case 'J':
		return ".---";
	case 'K':
		return "-.-";
	case 'L':
		return ".-..";
	case 'M':
		return "--";
	case 'N':
		return "-.";
	case 'O':
		return "---";
	case 'P':
		return ".--.";
	case 'Q':
		return "--.-";
	case 'R':
		return ".-.";	
	case 'S':
		return "...";
	case 'T':
		return "-";
	case 'U':
		return "..-";
	case 'V':
		return "...-";
	case 'W':
		return ".--";
	case 'X':
		return "-..-";
	case 'Y':
		return "-.--";
	case 'Z':
		return "--..";
	case ' ':
		return "";
	default:
		return "Not matching";

	}
		
}


