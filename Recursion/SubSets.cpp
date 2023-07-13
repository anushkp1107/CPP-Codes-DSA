/*
Leetcode 78 -->
Given an integer array nums of unique elements, return all possible
subsets  (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.
*/

/*
powerset[aka set of all subsets] of [1,2,3] = [1] [2] [3] [12] [13] [123] [23]   [all possible combinations]
*/

/*
select each element and do the exclude and include method
*/

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case'
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude the element
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector < vector<int> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
}

int main()
{

    return 0;
}