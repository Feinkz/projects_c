#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned int numb;
		do
	{
		unsigned long fact = 1;
		cout << "������� �����: ";
		cin >> numb;
		if (numb == 0) break;
		else
		{
			for (int j = numb; j > 0; j--)
			{
				fact *= j;
			}
			cout << "��������� �����  " << numb << "�����: " << fact << endl;
		}
	} while (numb != 0);
	return 0;
}