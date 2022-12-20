#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int div = n / 10;   // 23 / 10 = 2
            int mul = div * 10; // 2 * 10 = 20

            for (int i = 0; i <= 9; i++)
            {
                if ((mul + i) % 7 == 0)
                {
                    cout << mul + i << endl;
                    break;
                }
            }
        }
    }
}