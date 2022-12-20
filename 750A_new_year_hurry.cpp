#include <bits/stdc++.h>
#define fast() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
    fast();

    int n, k;
    cin >> n >> k;

    int total = 240 - k;
    int sum = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (5 * i);

        if (sum > total)
            break;

        ans++;
    }

    cout << ans << endl;
}
