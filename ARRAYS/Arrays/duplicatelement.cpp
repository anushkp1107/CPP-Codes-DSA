// lC 287

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        int ans;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second >= 2)
            {
                ans = it.first;
            }
        }
        return ans;
    }
};

int main()
{

    return 0;
}