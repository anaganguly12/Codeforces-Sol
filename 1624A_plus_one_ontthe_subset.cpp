#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        ll maxm = INT_MIN, minm = INT_MAX;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > maxm)
                maxm = a[i];

            if (a[i] < minm)
                minm = a[i];
        }

        cout << maxm - minm << endl;
    }
}
