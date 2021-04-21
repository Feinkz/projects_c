#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned long n;
	cout << "\n¬ведите число: ";
	cin >> n;
	for (int j = 1; j <= 200; j++)
	{
		cout << setw(5) << j * n << " ";
		if (j % 10 == 0)
			cout << endl;
	}
	return 0;
}