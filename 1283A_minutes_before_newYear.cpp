#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int h, m;
        cin >> h >> m;

        int total = 24 * 60;
        int now = h * 60 + m;

        int remaining = total - now;
        cout << remaining << endl;
    }
    return 0;
}