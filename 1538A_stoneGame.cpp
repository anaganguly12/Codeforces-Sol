#include "bits/stdc++.h"
using namespace std;

void solve()
{
    // code here
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;

    int maxPos = max_element(v.begin(), v.end()) - v.begin();
    int minPos = min_element(v.begin(), v.end()) - v.begin();

    cout << min({max(minPos, maxPos) + 1, (n - 1) - min(maxPos, minPos) + 1, (n - 1) - maxPos + minPos + 2, (n - 1) - minPos + maxPos + 2}) << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}