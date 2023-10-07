// max consecutive 1s

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                count = 0; // to reset the counter if element is not zero
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
