#include <iostream>
#include <locale>
#include <ctype.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char a;
	cout << "������� ������   ";
	cin >> a;
	cout << "�������� �������:   " << islower(a);
}