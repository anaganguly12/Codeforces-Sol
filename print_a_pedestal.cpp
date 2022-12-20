#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    for (ll a = 3; a < n; a++)
    {
        ll c = (n - a) / 2;
        ll b = n - a - c;

        if (c > 1 && b + 1 < a)
        {
            c--;
            b++;
        }

        if (a > b && b > c)
        {
            cout << b << " " << a << " " << c << endl;
            return;
        }
    }
}

int main()
{
    ll tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}
