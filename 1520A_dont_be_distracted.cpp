#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (char c = 'A'; c <= 'Z'; c++)
    {
        int f = n;
        int l = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                f = min(f, i);
                l = max(l, i);
            }
        }

        for (int i = f; i <= l; i++)
        {
            if (s[i] != c)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}
