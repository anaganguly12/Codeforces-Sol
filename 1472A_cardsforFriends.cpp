#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll w, h, n;
    cin >> w >> h >> n;
    ll ans = 1;
    while (w % 2 == 0)
    {
        w /= 2;
        ans *= 2;
    }
    while (h % 2 == 0)
    {
        h /= 2;
        ans *= 2;
    }

    cout << (ans >= n ? "YES\n" : "NO\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
