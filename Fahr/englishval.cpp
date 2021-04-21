#include <iostream>
#include <locale>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned int f1, f2, sh1, sh2, p1, p2, ft, sht, pt;
	char ch;
	do
	{
		cout << "Введите первую сумму: ";
		cin >> f1; cout << "."; cin >> sh1; cout << "."; cin >> p1;
		cout << "\nВведите вторую сумму: ";
		cin >> f2; cout << "."; cin >> sh2; cout << "."; cin >> p2;
		sht = 0;
		ft = 0;
		pt = p1 + p2;
		if (pt > 11)
		{
			sht += 1;
			pt = pt % 12;
		}
		sht = sht + sh1 + sh2;
		if (sht > 19)
		{
			ft += 1;
			sht = sht % 20;
		}
		ft = ft + f1 + f2;
		cout << "Всего: J" << ft << "." << sht << "." << pt;
		cout << "\nПовторить? (y/n)";
		ch = _getche();
	} while (ch!='n');
}