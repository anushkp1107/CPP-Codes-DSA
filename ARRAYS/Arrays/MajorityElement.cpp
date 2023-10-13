#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        vector<int> ans;
        float size = nums.size() / 2;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second > size)
            {
                ans.push_back(it.first);
            }
        }
        return ans[0];
    }
};

int main()
{

    return 0;
}