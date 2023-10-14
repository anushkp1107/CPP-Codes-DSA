// LC 229

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> ans;
        int size = nums.size() / 3;
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second > size)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

