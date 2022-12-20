#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll n)
{
    // ll ans = 0;
    // for (ll i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         ans += i;
    //     }
    //     else
    //     {
    //         ans -= i;
    //     }
    // }

    // cout << ans << endl;

    /* OPTIMIZE ONE */
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << (n - 1) / 2 - n << endl;
    }
}
int main()
{
    ll n;
    cin >> n;
    solve(n);
}