#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;

        for (int i = 1;; i++)
        {
            if (i % 3 == 0 || i % 10 == 3)
                continue;

            if (--k == 0)
            {
                cout << i << "\n";
                break;
            }
        }
    }
}