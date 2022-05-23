#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll c = 0;
    for (ll l = 1; l < n; l++)
    {
        if (n % l == 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}