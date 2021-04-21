#include <iostream>
#include <locale>
using namespace std;
int main()
{
	
	float decfunt, sh, oldpens;
	int funts;
	float defrac;
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите число дес€тичных фунтов: ";
	cin >> decfunt;
	funts = static_cast<int>(decfunt);
	defrac = decfunt - funts;
	sh = static_cast<int>(defrac*20);
	oldpens =static_cast<int>(defrac*240 - sh*12);
	cout << "Ёквивалентна€ сумма в старой системе: " << funts << "." << sh << "." << oldpens;
}