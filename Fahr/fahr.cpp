#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int ftemp;
    cout << "������� ����������� �� ���������� ";
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    cout << "����������� �� ������� ����� " << ctemp << '\n';
    return 0;
}
