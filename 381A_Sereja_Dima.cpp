// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int n;
//     cin >> n;
//     vector<int> vc(n);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> vc[i];
//     }

//     int l = 1, r = n;
//     int s = 0, d = 0;
//     int i = 1;
//     while (l <= r)
//     {
//         if (i % 2 == 1)
//         {
//             if (vc[l] >= vc[r])
//             {
//                 s += vc[l++];
//             }
//             else
//             {
//                 s += vc[r--];
//             }
//         }
//         else
//         {
//             if (vc[l] >= vc[r])
//             {
//                 d += vc[l++];
//             }
//             else
//             {
//                 d += vc[r--];
//             }
//         }

//         i++;
//     }

//     cout << s << " " << d << endl;
// }

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
        int f = n, l = -1;
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

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}