#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int lower = 0, upper = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (65 <= str[i] && str[i] <= 90)
        {
            upper++;
        }
        else if (97 <= str[i] && str[i] <= 122)
        {
            lower++;
        }
    }

    if (lower >= upper)
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = toupper(str[i]);
        }
    }

    cout << str << endl;
}