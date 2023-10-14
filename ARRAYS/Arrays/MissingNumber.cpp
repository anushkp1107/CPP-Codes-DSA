// LC 268

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        int n = nums.size();
        int s2 = n * (n + 1) / 2;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        int ans = s2 - sum;
        return ans;
    }
};

int main()
{

    return 0;
}