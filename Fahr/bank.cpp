#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int vklad, years;
	double deposit, perc;
	cout << "������� ������������ �����:";
	cin >> vklad;
	cout << "\n������� ����� ���: ";
	cin >> years;
	cout << "\n������� ���������� ������: ";
	cin >> perc;
	deposit = vklad;
	for (int i = 1; i <= years; i++)
	{
		deposit += deposit * perc / 100;
	}
	cout << "\n����� " << years << " ��� �� �������� " << deposit << " �������";
}