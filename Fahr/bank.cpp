#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int vklad, years;
	double deposit, perc;
	cout << "¬ведите вкладываемую сумму:";
	cin >> vklad;
	cout << "\n¬ведите число лет: ";
	cin >> years;
	cout << "\n¬ведите процентную ставку: ";
	cin >> perc;
	deposit = vklad;
	for (int i = 1; i <= years; i++)
	{
		deposit += deposit * perc / 100;
	}
	cout << "\n„ерез " << years << " лет вы получите " << deposit << " доллара";
}