// MAXIMUM SUBARRAY SUM
// KADANE'S ALGO

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int maxi = nums[0];
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];

            maxi = max(sum, maxi);

            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};
