#include <iostream>
using namespace std;
int main()
{
    int ftemp;
    cout << "������� ����������� �� ����������";
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    cout << "Температура по цельсию равна" << ctemp << '\n';
    return 0;
}
