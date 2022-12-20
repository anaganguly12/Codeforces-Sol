#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define Ana_nya ios_base::sync_with_stdio(false);
#define Is_cutuyuiii cin.tie(NULL);
#define Dolphin cout.tie(NULL);

#define ll long long

void solve()
{
    // Code goes below
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = 0;
    if (a < b)
    {
        ans++;
    }
    if (a < c)
    {
        ans++;
    }
    if (a < d)
    {
        ans++;
    }

    cout << ans << "\n";
}

int main()
{
    Ana_nya Is_cutuyuiii Dolphin
        ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}