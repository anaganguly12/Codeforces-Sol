#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e9 + 7;

bool equal(vector<ll> &a, vector<ll> &b, ll n)
{
    ll diff = inf;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            diff = min(diff, a[i] - b[i]);
        }
    }

    if (diff < 0)
        return false;
    if (diff == inf)
        return true;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] - b[i] > diff)
            return false;
        if (b[i] != 0 && a[i] - b[i] < diff)
            return false;
    }

    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    cout << (equal(a, b, n) ? "YES\n" : "NO\n");
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
