#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int vklad, years, depend;
	double deposit, perc;
	cout << "������� ������������ �����:";
	cin >> vklad;
	cout << "\n������� �������� �����: ";
	cin >> depend;
	cout << "\n������� ���������� ������: ";
	cin >> perc;
	deposit = vklad;
	perc = perc / 100;
	years = 0;
	do
	{
		deposit+=deposit*perc;
		years++;
	} while (deposit<depend);
	cout << "\n����� " << years << " ��� �� �������� " << depend << " �������";
}