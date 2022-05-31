#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int orange[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> orange[i];
        sum += orange[i];
    }

    float ans = (float)sum / (float)n;

    cout << ans << endl;
}