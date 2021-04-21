#include <iostream>
#include <locale>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	char ch;
	unsigned long numb=0;
	cout << "\nВведите число : ";
	while ((ch = _getche()) != '\r')
	{
		numb = numb * 10 + ch - '0';
	}
	cout << "\nВы ввели число: " << numb << endl;;
	return 0;
}