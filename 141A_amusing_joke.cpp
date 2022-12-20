#include <bits/stdc++.h>
using namespace std;

int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;
    sort(pile.begin(), pile.end());
    string mrg = guest + host;
    sort(mrg.begin(), mrg.end());

    if (pile == mrg)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}