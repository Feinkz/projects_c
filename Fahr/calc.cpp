#include <iostream>
#include <locale>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double x1,x2,result;
	char ch,oper;
	
	do
	{
		cout << "\n������� ������ �������, �������� � ������ �������: ";
		cin >> x1 >> oper >> x2;
		switch (oper)
		{
		case '+': result = x1 + x2; break;
		case '-': result = x1 - x2; break;
		case '*': result = x1 * x2; break;
		case '/': result = x1 / x2; break;
		default: cout << "����� �������� �� ����������!"; result = 0; break;
		}
		cout << "\n��������� �����: " << result;
		cout << "\n������ ��������� ��������?(y/n):";
		ch = _getche();
	} while (ch!='n');
	return 0;
}