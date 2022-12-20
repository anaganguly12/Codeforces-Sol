#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, x = 0;
    cin >> n;

    string s;
    cin >> s;

    string ans = "";

    if (s[0] == '9')
    {
        ll carry = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            x = s[i] - '0';
            x += carry;
            if (x > 1)
            {
                ll y = 11 - x;
                carry = 1;
                ans += (y + '0');
            }
            else
            {
                carry = 0;
                ll y = 1 - x;
                ans += (y + '0');
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            cout << 9 - (s[i] - '0');
        }
    }

    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}