#include <iostream>
#include <locale>
using namespace std;
#include <process.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned long n, j;
	cout << "������� �����: ";
	cin >> n;
	for(j=2; j<=n/2; j++)
		if (n % j == 0)
		{
			cout << "����� �� �������: ������� �� " << j << endl;
			exit(0);
		}
	cout << "����� �������� �������\n";
	return 0;
}