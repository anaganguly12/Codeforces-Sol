#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    char ans = 'a';
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }

    if (n >= 26)
    {
        for (int i = 0; i < 26; i++)
        {
            if (str.find(ans) != -1)
            {
                ans++;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }

        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}