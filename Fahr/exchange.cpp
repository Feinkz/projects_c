#include <iostream>
#include <locale>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	const float pound = 1.487, frank = 0.172, dmark = 0.584, yen = 0.00955;
	cout << "������� ����� � ��������:  ";
	double sum;
	cin >> sum;
	cout << setw(20) << "����� � ������ ����������: " << setw(10) << sum / pound << endl
		<< setw(20) << "����� � ������� ����������:  " << setw(10) << sum / frank << endl
		<< setw(20) << "����� � �������� ������ ����������:  " << setw(10) << sum / dmark << endl
		<< setw(20) << "����� � �������� ����� ����������:" << setw(10) << sum / yen << endl;

}