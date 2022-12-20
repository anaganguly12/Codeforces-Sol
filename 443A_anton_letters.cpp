#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char> ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            ans.insert(s[i]);
        }
    }
    cout << ans.size() << endl;
    return 0;
}