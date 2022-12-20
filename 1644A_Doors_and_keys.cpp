#include <bits/stdc++.h>
using namespace std;

void solve(string str)
{
    if (str[0] == 'R' || str[0] == 'G' || str[0] == 'B')
    {
        cout << "NO" << endl;
        return;
    }

    int r = 0, g = 0, b = 0, wrong = 0;
    for (int i = 0; i < 6; i++)
    {
        if (str[i] == 'r')
        {
            r++;
        }
        if (str[i] == 'g')
        {
            g++;
        }
        if (str[i] == 'b')
        {
            b++;
        }
        if (str[i] == 'R' && r == 0)
        {
            wrong++;
        }
        if (str[i] == 'G' && g == 0)
        {
            wrong++;
        }
        if (str[i] == 'B' && b == 0)
        {
            wrong++;
        }
    }
    if (wrong > 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string s;
        cin >> s;

        solve(s);
    }
}