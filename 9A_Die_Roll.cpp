#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    const string prob[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int ans = max(y, w);
    cout << prob[ans] << endl;
}