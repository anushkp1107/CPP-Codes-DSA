// 2149. Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;

//* BRUTE SOLN

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;

        for (auto it : nums)
        {
            if (it > 0)
            {
                pos.push_back(it);
            }
            else
            {
                neg.push_back(it);
            }
        }

        int posI;
        int negI;

        while (posI < pos.size() and negI < neg.size())
        {
            ans.push_back(pos[posI++]);
            ans.push_back(neg[negI++]);
        }
        return ans;
    }
};

//* Better / brute 2 pointer

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        int even = 0;
        int odd = 1;
        for (auto it : nums)
        {
            if (it > 0)
            {
                ans[even] = it;
                even += 2;
            }
            else
            {
                ans[odd] = it;
                odd += 2;
            }
        }
        return ans;
    }
};
