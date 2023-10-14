#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &nums, int k)
{
    // Write your code here
    int l = 0, r = 0;
    int len = 0;
    int sum = nums[0];
    int n = nums.size();

    while (r < n)
    {
        while (l < r and sum > k)
        {
            sum -= nums[l];
            l++;
        }
        if (sum == k)
        {
            len = max(len, r - l + 1);
        }

        r++;
        if (r < n)
        {
            sum += nums[r];
        }
    }

    return len;
}

int main()
{

    return 0;
}