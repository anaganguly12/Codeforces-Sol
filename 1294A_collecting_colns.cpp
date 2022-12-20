#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll s1, s2, s3, n;
        cin >> s1 >> s2 >> s3 >> n;
        ll maxm = max(s1, max(s2, s3));
        ll s = s1 + s2 + s3 + n;

        if (s % 3 == 0 && s / 3 >= maxm)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}