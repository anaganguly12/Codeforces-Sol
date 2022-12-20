#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n <= 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "\n";
        }
        else
        {
            ll l = 0, r = n - 1;
            vector<ll> ans(n);

            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    ans[i] = v[l++];
                }
                else
                {
                    ans[i] = v[r--];
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
    }
}