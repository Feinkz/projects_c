#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int vklad, years, depend;
	double deposit, perc;
	cout << "¬ведите вкладываемую сумму:";
	cin >> vklad;
	cout << "\n¬ведите желаимаю сумму: ";
	cin >> depend;
	cout << "\n¬ведите процентную ставку: ";
	cin >> perc;
	deposit = vklad;
	perc = perc / 100;
	years = 0;
	do
	{
		deposit+=deposit*perc;
		years++;
	} while (deposit<depend);
	cout << "\n„ерез " << years << " лет вы получите " << depend << " доллара";
}