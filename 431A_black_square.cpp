#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    string str;
    cin >> str;
    ll ans = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
        {
            ans += a;
        }
        else if (str[i] == '2')
        {
            ans += b;
        }
        else if (str[i] == '3')
        {
            ans += c;
        }
        else if (str[i] == '4')
        {
            ans += d;
        }
    }

    cout << ans << endl;
}
int main()
{
    solve();
}