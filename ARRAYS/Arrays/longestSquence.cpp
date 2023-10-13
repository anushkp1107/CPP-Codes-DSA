// LC 128

#include <bits/stdc++.h>
using namespace std;

//* brute is linear search -- >

class Solution
{
private:
    int linearSearch(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return true;
            }
        }
        return false;
    }

public:
    int longestConsecutive(vector<int> &nums)
    {
        int longest = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            int cnt = 1;

            while (linearSearch(nums, x + 1) == true)
            {
                x += 1;
                cnt += 1;
            }
            longest = max(longest, cnt);
        }

        return longest;
    }
};

//* OPTIMAL

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        int cnt = 1;
        int x;
        if (n == 0)
        {
            return 0;
        }
        int longest = 1;
        unordered_set<int> st;
        for (auto it : nums)
        {
            st.insert(it);
        }
        for (auto it : st)
        {
            if (st.find(it - 1) == st.end())
            {
                int cnt = 1;
                x = it;
            }

            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};
