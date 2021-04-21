#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned int guest, chears;
	unsigned long quantvar;
	cout << "Введите количество гостей: ";
	cin >> guest;
	cout << "\nВведите количество стульев: ";
	cin >> chears;
	if (guest >= chears)
	{
		quantvar = 1;
		for (int i = 1; i < chears; i++)
		{
			quantvar *= guest;
			guest -= 1;
		}
		cout << "Количество вариантов рассадок составляет: " << quantvar;
	}
	else
	{
		cout << "Гостей должно быть больше чем стульев!";
	}
	return 0;
}