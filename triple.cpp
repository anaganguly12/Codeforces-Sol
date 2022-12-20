#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    for (ll i = 0; i < n; i++)
    {
        if (mp[v[i]] >= 3)
        {
            cout << v[i] << "\n";
            return;
        }
    }

    cout << -1 << "\n";
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