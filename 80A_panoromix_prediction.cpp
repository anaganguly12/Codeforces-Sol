#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    bool flag = 0;
    for (int i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        return true;
    }
    return false;
}

void solve(int n, int m)
{
    for (int i = n + 1; i <= m; i++)
    {
        if (isPrime(i))
        {
            if (i == m)
            {
                cout << "YES" << endl;
                return;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;

    solve(n, m);
}