#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{

    ll t;

    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << (abs(a - b) + 9) / 10 << endl;
    }

    return 0;
}