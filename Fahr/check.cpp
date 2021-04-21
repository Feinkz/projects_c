#include <iostream>
#include <locale>
#include <ctype.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char a;
	cout << "Введите символ   ";
	cin >> a;
	cout << "Значение символа:   " << islower(a);
}