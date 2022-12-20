#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b;
    cin >> a >> b;

    cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2 << endl;
}