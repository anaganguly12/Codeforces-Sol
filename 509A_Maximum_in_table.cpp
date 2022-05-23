#include <bits/stdc++.h>
using namespace std;

int maximuminTable(int i, int j)
{
    if (i == 1 || j == 1)
    {
        return 1;
    }

    return maximuminTable(i - 1, j) + maximuminTable(i, j - 1);
}
int main()
{

    int n;
    cin >> n;

    int row = n, col = n;

    cout << maximuminTable(row, col) << endl;
    return 0;
}