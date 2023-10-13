// LC 1748

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // SELF BRUTE
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            mpp[nums[i]]++;
        }
        vector<int> ans;
        for (auto it : mpp)
        {
            if (it.second == 1)
            {
                ans.push_back(it.first);
            }
        }

        int sum = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            sum += ans[i];
        }
        return sum;
    }
};

// SAME BUT BETTER SOLN

class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (auto x : nums)
        {
            mp[x]++;
        }

        int sum = 0;
        for (auto x : mp)
        {
            if (x.second == 1)
            {
                sum += x.first;
            }
        }

        return sum;
    }
};


// CANT USE SET HERE AS ->

/*
    TC = [1,2,3,2] 

    here if we use set the elements inserted will be 1 2 3 but we dont want 2 as it is duplicate but set wont know that so it will insert the first 2 and then not the 2 one

    hence we use hashmaps to know the frequency and then do the sum;
*/