// LC 349 INTERSECTION OF 2 ARRAYS

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> st;
        set<int> ss;
        for (int i = 0; i < nums1.size(); i++)
        {
            st.insert(nums1[i]);
        }

        for (int j = 0; j < nums2.size(); j++)
        {
            ss.insert(nums2[j]);
        }

        //* SET INTERSECTION RETURNS THE COMMON ELEMENTS IN BOTH THE SETS //*

        vector<int> common_data;
        set_intersection(st.begin(), st.end(), ss.begin(), ss.end(), back_inserter(common_data));
        return common_data;
    }
};

