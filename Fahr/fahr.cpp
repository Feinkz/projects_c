#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int ftemp;
    cout << "Введите температуру по фаренгейту ";
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    cout << "Температура по цельсию равна " << ctemp << '\n';
    return 0;
}
