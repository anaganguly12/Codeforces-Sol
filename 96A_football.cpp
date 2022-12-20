#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    if (str.find("0000000") < 100 || str.find("1111111") < 100)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{

    solve();
}
