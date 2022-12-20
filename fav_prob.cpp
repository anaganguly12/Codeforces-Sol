#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    unordered_map<char, int> mpp;
    for (int i = 1; i <= 26; i++)
    {
        mpp[s[i]] = i;
    }

    int n;
    cin >> n;
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    cout << mpp[str[n - 1]] + 1 << endl;
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