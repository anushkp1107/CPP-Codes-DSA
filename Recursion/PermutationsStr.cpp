/*
we have a string of 3 places and each places can have either a b or c.
first we have a b and c.....now we need to swap a with b and then with c and also once with a itself. the pointer which was first pointing at a will move 1 step ahead when we swap the letters.....so after swapping the three combinations become abc bac cba...how the pointer points at b [for abc and cba]....it points at a for [bac].
now with these 3 combinations again do the swapping [ex: for abc where the pointer is at b --> swap b with itself which gives abc and then b with c which gives acb]
*/

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);
        // backtrack
        swap(nums[index], nums[j]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

// https://youtu.be/va3NEycUxsg