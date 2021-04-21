#include <iostream>
using namespace std;
int main()
{
    int ftemp;
    cout << "Ââåäèòå òåìïåðàòóðó ïî ôàðåíãåéòó";
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    cout << "Ð¢ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð° Ð¿Ð¾ Ñ†ÐµÐ»ÑŒÑÐ¸ÑŽ Ñ€Ð°Ð²Ð½Ð°" << ctemp << '\n';
    return 0;
}
