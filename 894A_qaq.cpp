#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    int ans = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'Q')
        {
            ans += x;
            y++;
        }
        else if (s[i] == 'A')
        {
            x += y;
        }
    }

    cout << ans << "\n";
}

int main()
{
    solve();
    return 0;
}