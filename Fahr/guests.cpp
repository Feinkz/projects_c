#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned int guest, chears;
	unsigned long quantvar;
	cout << "������� ���������� ������: ";
	cin >> guest;
	cout << "\n������� ���������� �������: ";
	cin >> chears;
	if (guest >= chears)
	{
		quantvar = 1;
		for (int i = 1; i < chears; i++)
		{
			quantvar *= guest;
			guest -= 1;
		}
		cout << "���������� ��������� �������� ����������: " << quantvar;
	}
	else
	{
		cout << "������ ������ ���� ������ ��� �������!";
	}
	return 0;
}