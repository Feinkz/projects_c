#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float f, sh, p, df;
	cout << "������� ���������� ������: ";
	cin >> f;
	cout << "������� ���������� ���������: ";
	cin >> sh;
	cout << "������� ���������� ������: ";
	cin >> p;
	df = ((f*20+sh)*12+p)/240;
	cout << "���������� ������: "<<df;
}