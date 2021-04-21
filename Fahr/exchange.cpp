#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	const float pound = 1.487, frank = 0.172, dmark = 0.584, yen = 0.00955;
	cout << "Введите сумму в долларах:  ";
	double sum;
	cin >> sum;
	cout << setw(20) << "Сумма в фунтах составляет: " << setw(10) << sum / pound << endl
		<< setw(20) << "Сумма в франках составляет:  " << setw(10) << sum / frank << endl
		<< setw(20) << "Сумма в Немецких марках составляет:  " << setw(10) << sum / dmark << endl
		<< setw(20) << "Сумма в японских йенах составляет:" << setw(10) << sum / yen << endl;

}