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
    char b[10][10];
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 2; i <= 7; i++)
    {
        for (int j = 2; j <= 7; j++)
        {
            if (b[i][j] == '#' && b[i - 1][j - 1] == '#' && b[i + 1][j - 1] == '#' && b[i - 1][j + 1] && b[i + 1][j + 1])
            {
                cout << i << " " << j << endl;
                return;
            }
        }
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