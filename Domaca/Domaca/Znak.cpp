#include "Znak.h"
#include <iostream>
#include <cmath>


Znak::Znak(char a)
{
	this->znak = this->dajZnakZRozpetia(a);
}

Znak::~Znak()
{
}

char Znak::getZnak()
{
	return this->znak;
}

Znak Znak::operator+(Znak a)
{

	char b = this->dajZnakZRozpetia(((a.getZnak() + this->znak) - 96));	  
	return Znak(b);
}

Znak Znak::operator-(Znak a)
{

	char b = this->dajZnakZRozpetia(((this->znak - a.getZnak()) + 122));
	return Znak(b);
}

Znak Znak::operator*(Znak a)
{
	char b = this->dajZnakZRozpetia(((this->znak - 96)  * (a.getZnak() - 96) + 96));
	return Znak(b);
}

Znak Znak::operator/(Znak a)
{
	char b = this->dajZnakZRozpetia(((this->znak - 96)  / (a.getZnak() - 96) + 96));
	return Znak(b);
}

char Znak::dajZnakZRozpetia(char a)
{
	char b;
	
	if (a >= 97 && a <= 122){b = a;}
	else if (a < 97) {b = (a % 25) + 96;}
	else {b = ((a % 122) + 96);}

	return b;
}
