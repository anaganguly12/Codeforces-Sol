#include <bits/stdc++.h>
using namespace std;

void solve(string s1, string s2)
{
    string res;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            res += '1';
        }
        else
        {
            res += '0';
        }
    }

    cout << res << endl;
}
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;

    solve(s1, s2);
}