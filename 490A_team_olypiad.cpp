#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, x;
    cin >> n;
    ll a = 0, b = 0, c = 0;
    vector<int> one(5000);
    vector<int> two(5000);
    vector<int> three(5000);

    for (int i = 1; i <= n; i++)
    {
        cin >> x;

        if (x == 1)
        {
            one[a] = i;
            a++;
        }
        else if (x == 2)
        {
            two[b] = i;
            b++;
        }
        else
        {
            three[c] = i;
            c++;
        }
    }

    ll minm = min(a, min(b, c));
    cout << minm << endl;

    for (int i = 0; i < minm; i++)
    {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
}
