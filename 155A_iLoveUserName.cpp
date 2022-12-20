#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    int earn[n];
    int maxm, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> earn[i];
    }
    maxm = earn[0];
    int minm = earn[0];
    for (int i = 1; i < n; i++)
    {
        if (earn[i] < minm)
        {
            ans++;
            minm = earn[i];
        }
        if (earn[i] > maxm)
        {
            ans++;
            maxm = earn[i];
        }
    }

    cout << ans << endl;
}