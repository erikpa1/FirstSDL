#pragma once
class Znak
{
public:
	Znak(char a);
	~Znak();

	char getZnak();

	Znak operator+(Znak a);
	Znak operator-(Znak a);
	Znak operator*(Znak a);
	Znak operator/(Znak a);

	bool operator> (Znak a) { return znak > a.getZnak(); };
	bool operator< (Znak a) { return znak < a.getZnak(); };
	bool operator>= (Znak a) { return znak >= a.getZnak(); };
	bool operator<= (Znak a) { return znak <= a.getZnak(); };
	bool operator== (Znak a) { return znak == a.getZnak(); };
	bool operator!= (Znak a) { return znak != a.getZnak(); };

private:

	char znak;
	char dajZnakZRozpetia(char a);







};

