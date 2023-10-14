// LC 217 CONTAINS DUPLICATE

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }

        for (auto it : mpp)
        {
            if (it.second >= 2)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}