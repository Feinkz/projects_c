#include <iostream>
#include <locale>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char n;
	double temp;
	cout << "\n������� 1 ��� �������� ����� ������� � ����� ����������.";
	cout << "\n2 ��� �������� ����� ���������� � ����� �������: ";
	n = _getche();
	switch (n)
	{
	case '1':cout << "\n������� ����������� (� �����������): ";
		cin >> temp;
		cout << "� �������� ���: " << (temp - 32) * (5.0 / 9.0) << endl;
		break;
	case '2':cout << "\n������� ����������� (� ��������): ";
		cin >> temp;
		cout << "\n� ����������� ���:" << temp * 1.8 + 32 << endl;
		break;
	default: 
		cout << "\n������ ������ ���!";
		break;
	}
	/*if (n == 1)
	{
		cout << "\n������� ����������� (� �����������): ";
		cin >> temp;
		cout << "� �������� ������� ���: " << (temp - 32) * (5.0 / 9.0) << endl;
	}
	else
	{
		cout << "������� ����������� (� ��������): ";
		cin >> temp;
		cout << "� ����������� ���: " << temp * 1.8 + 32 << endl;
	}*/
	cout << endl;
	return 0;
}