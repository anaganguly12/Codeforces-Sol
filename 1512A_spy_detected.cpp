#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (mpp[arr[i]] == 1)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }
}