#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum /= 2;
    int ans = 0;
    int cnt = 0;
    sort(a.begin(), a.end());

    for (int i = n - 1; i >= 0; i--)
    {
        ans += a[i];
        cnt += 1;
        if (ans > sum)
        {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}