#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, h;
    cin >> n >> h;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= h)
        {
            cnt += 1;
        }
        else
        {
            cnt += 2;
        }
    }

    cout << cnt << endl;
}