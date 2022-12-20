#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll nums[4];
    int mx = 0;
    for (ll i = 0; i < 4; i++)
    {
        cin >> nums[i];
    }
    sort(nums, nums + 4);

    ll a = nums[3] - nums[0];
    ll b = nums[3] - nums[1];
    ll c = nums[3] - nums[2];

    cout << a << " " << b << " " << c << endl;
}