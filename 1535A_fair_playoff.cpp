#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        // ll skill[4];
        // for (ll i = 0; i < 4; i++)
        // {
        //     cin >> skill[i];
        // }

        // ll final1 = max(skill[0], skill[1]);
        // ll final2 = max(skill[2], skill[3]);

        // sort(skill, skill + 4);

        // ll ans1 = skill[3];
        // ll ans2 = skill[2];

        // if ((ans1 == final1 || ans1 == final2) && (ans2 == final1 || ans2 == final2))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }

        ll s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        if (min(s1, s2) > max(s3, s4) || max(s1, s2) < min(s3, s4))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}