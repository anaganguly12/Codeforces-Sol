#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int i = 0, tmp = a[0];
    while (tmp < n)
    {
        i++;
        i %= 7;
        tmp += a[i];
    }

    cout << i + 1;
    return 0;
}