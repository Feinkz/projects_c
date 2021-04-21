#include <iostream>
#include <locale>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char n;
	double temp;
	cout << "\nНажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта.";
	cout << "\n2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
	n = _getche();
	switch (n)
	{
	case '1':cout << "\nВведите температуру (в Фаренгейтах): ";
		cin >> temp;
		cout << "В Цельсиях это: " << (temp - 32) * (5.0 / 9.0) << endl;
		break;
	case '2':cout << "\nВведите температуру (в Цельсиях): ";
		cin >> temp;
		cout << "\nВ Фаренгейтах это:" << temp * 1.8 + 32 << endl;
		break;
	default: 
		cout << "\nТакого пункта нет!";
		break;
	}
	/*if (n == 1)
	{
		cout << "\nВведите температуру (в Фаренгейтах): ";
		cin >> temp;
		cout << "В градусах цельсия это: " << (temp - 32) * (5.0 / 9.0) << endl;
	}
	else
	{
		cout << "Введите температуру (в Цельсиях): ";
		cin >> temp;
		cout << "В Фаренгейтах это: " << temp * 1.8 + 32 << endl;
	}*/
	cout << endl;
	return 0;
}