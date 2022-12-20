#include <bits/stdc++.h>
#define fast() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fast();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;

        sort(a.begin(), a.end());
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            ok &= (a[i] - a[i - 1] <= 1);
        }

        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
