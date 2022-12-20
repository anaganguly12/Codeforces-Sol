#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll d, cnt = 0;
    ll k, l, m, n;
    cin >> k >> l >> m >> n >> d;
    cnt = d;
    for (ll i = 1; i <= d; i++)
    {
        if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
        {
            cnt--;
        }
    }

    cout << cnt << endl;
}