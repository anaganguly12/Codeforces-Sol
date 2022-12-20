#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
        }
        else if ((a > b && (a - b) % 2 == 0) || (a < b && (b - a) % 2 != 0))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}