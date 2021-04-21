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
		cout << "\nВведите первый операнд, операцию и второй операнд: ";
		cin >> x1 >> oper >> x2;
		switch (oper)
		{
		case '+': result = x1 + x2; break;
		case '-': result = x1 - x2; break;
		case '*': result = x1 * x2; break;
		case '/': result = x1 / x2; break;
		default: cout << "Такой операции не существует!"; result = 0; break;
		}
		cout << "\nРезультат равен: " << result;
		cout << "\nХотите повторить операцию?(y/n):";
		ch = _getche();
	} while (ch!='n');
	return 0;
}