#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
char bus[N][5];

void printSeat(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << bus[i][j];
        }
        cout << endl;
    }
}

void yes()
{
    cout << "YES" << endl;
}

void no()
{
    cout << "NO" << endl;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> bus[i][j];
        }
    }

    bool possible = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (bus[i][j * 3] == 'O' && bus[i][j * 3 + 1] == 'O')
            {
                bus[i][j * 3] = '+';
                bus[i][j * 3 + 1] = '+';
                possible = true;
                break;
            }
        }
        if (possible)
            break;
    }

    if (!possible)
    {
        no();
    }
    else
    {
        yes();
        printSeat(n);
    }

    return 0;
}