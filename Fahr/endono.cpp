#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 99;
	while (n != 0)
		cin >> n;
	cout << endl;
	return 0;
}