#include <iostream>
#include <locale>
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
		cout << "\n�������� ����������� (n,s,e,w): ";
		dir = _getche();
		switch (dir)
		{
		case 'n': y--; break;
		case 's': y++; break;
		case 'e': x++; break;
		case 'w': x--; break;
		case '\r': cout << "�����...\n"; break;
		default: cout << "���������� ���\n";
		}
	}
	return 0;
}