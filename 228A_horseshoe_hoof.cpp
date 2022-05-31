#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll s[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    sort(s, s + 4);

    int cnt = 1;
    for (int i = 0; i < 4; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt++;
        }
    }

    cout << cnt - 1 << endl;
}