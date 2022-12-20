#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string t;
    cin >> t;

    string s1 = s;
    reverse(s1.begin(), s1.end());

    if (s1 == t)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}