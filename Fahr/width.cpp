#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	cout << setw(9) << "�����" << setw(12)
		<< "���������" << endl
		<< setw(9) << "������" <<setfill('.')<< setw(12) << pop1 << endl
		<< setw(9) << "�����" << setw(12) << pop2 << endl
		<< setw(9) << "���������" << setw(12) << pop3 << endl;
	return 0;
}