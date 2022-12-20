#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;

    ll ans = 0, police = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == -1)
        {
            if (!police)
            {
                ans++;
            }
            else
            {
                police--;
            }
        }
        else
        {
            police += x;
        }
    }

    cout << ans << endl;
}