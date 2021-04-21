#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float f, sh, p, df;
	cout << "¬ведите количество фунтов: ";
	cin >> f;
	cout << "¬ведите количество шиллингов: ";
	cin >> sh;
	cout << "¬ведите количество пенсов: ";
	cin >> p;
	df = ((f*20+sh)*12+p)/240;
	cout << "ƒес€тичных фунтов: "<<df;
}