#include <iostream>
#include <locale>
#include <process.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char dir = 'a';
	int x = 10, y = 10;
	while (dir!='\r')
	{
		cout << "\n���� ����������: " << x << ". " << y;
		if (x < 5 || x>15)
			cout << "\n��������� �������!!!!";
		if (x % 7 == 0 & y % 7 == 0)
			cout << "\n����� ��������� ����!";
		cout << "\n�������� ����������� (n,s,e,w): ";
		dir = _getche();
		switch (dir)
		{
		case 'n': y--; break;
		case 's': y++; break;
		case 'w': x--; break;
		case 'e': x++; break;
		}
		if (x == 7 && y == 11)
		{
			cout << "\n�� ����� ���������!\n";
			exit(0);
		}
	}
	return 0;
}