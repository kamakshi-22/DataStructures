#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{8, 1, 2, 2, 3};
    vector<int> ans;
    vector<int> v(nums);      // 8 1 2 2 3
    sort(v.begin(), v.end()); // 1 2 2 3 8
    vector<int>::iterator lb;

    for (int i = 0; i < nums.size(); i++)
    {
        lb = lower_bound(v.begin(), v.end(), nums[i]);
        //
        ans.push_back(lb - v.begin();)
    }

    return 0;
}
