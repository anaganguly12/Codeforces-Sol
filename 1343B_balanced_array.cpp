#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            int a = 2;
            for (int i = 1; i <= n / 2; i++)
            {
                cout << a << " ";
                a = a + 2;
            }
            ll last = a - 2;

            int b = 1;
            for (int i = 1; i < n / 2; i++)
            {
                cout << b << " ";
                b = b + 2;
            }

            cout << last + (n / 2 - 1) << endl;
        }
    }
}