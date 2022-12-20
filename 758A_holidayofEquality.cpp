#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;

    ll burl[n];
    ll maxm = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> burl[i];
        if (burl[i] > maxm)
        {
            maxm = burl[i];
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (burl[i] < maxm)
        {
            ans += (maxm - burl[i]);
        }
    }

    cout << ans << endl;
    return 0;
}