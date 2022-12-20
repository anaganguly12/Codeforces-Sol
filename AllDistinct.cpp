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
    ll n;
    cin >> n;

    set<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ans.emplace(x);
    }

    if ((n - ans.size()) % 2 == 0)
    {
        cout << ans.size() << endl;
    }
    else
    {
        cout << ans.size() - 1 << endl;
    }
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