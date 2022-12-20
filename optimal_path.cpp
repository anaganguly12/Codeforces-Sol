#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0, final = 0;

    for (ll i = 1; i <= 1; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            ans += j;
            final = j;
        }
    }

    ll nm = n * m;
    ll i = 2;
    while (i <= n)
    {
        ans += (final * i);
        i++;
    }

    cout << ans << "\n";
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}