#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        ll n;
        cin >> n;

        cout << ((n / 2) + (n % 2)) << endl;
    }
}