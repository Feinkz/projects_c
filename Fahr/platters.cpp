#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int speed;
	cout << "\n������� �������� �������� ��������� 33,45 ��� 78: ";
	cin >> speed;
	switch (speed)
	{
	case 33:
		cout << "������������� ������\n";
		break;
	case 45:
		cout << "������ �������\n";
		break;
	case 78:
		cout << "���������� ������\n";
		break;
	}
	return 0;
}