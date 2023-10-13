// LC 136

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for (auto it : mp)
        {
            if (it.second == 1)
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