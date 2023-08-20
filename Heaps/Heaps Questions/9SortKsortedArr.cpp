// sort a k sorted array / sort a nearly sorted array

// Given an array of N elements, where each element is at most K away from its target position, devise an algorithm that sorts in O(N log K) time.

// https://www.youtube.com/watch?v=dYfM6J1y0mU&list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9&index=4

/*
    jo element man lo index 0 pe honi chaiye wo k index dur hai...
    0 index se hame bas k tak dhekna padega as the element which shold be at 0 is k away from it..so har baar hame bas k away tk dhekna padega
    min heap banao and
    so traverse karo and push elements till size of heap < k aur jaise hi k se zyada ho jaata hai , jo elemtnt top pe hoga wo 1st index pe hone wla element hoga and so on
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> nearlySorted(int arr[], int num, int K)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans; // to push all the sorted elements
    for (int i = 0; i < num; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > K)
        {
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    while (pq.empty() == false)
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
