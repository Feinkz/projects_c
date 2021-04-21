#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	long dividend, divisor;
	char ch;
	do
	{
		cout << "¬ведите делимое: ";
		cin >> dividend;
		cout << "¬ведите делитель: ";
		cin >> divisor;
		cout << "„астное равно: " << dividend / divisor;
		cout << ", остаток равен " << dividend % divisor;
		cout << "\n≈щЄ раз?(y/n): ";
		cin >> ch;
	} 
	while (ch != 'n');
	return 0;
}