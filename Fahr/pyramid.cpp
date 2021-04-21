#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	for (int i = 1; i <= 20; i++)
	{
		cout << setw(20-i);
		for (int j = 0; j<(i*2-1); j++)
		{
			cout <<'X';
		}
		cout << endl;
	}
}