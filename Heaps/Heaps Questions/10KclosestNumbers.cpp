// K closest Numbers
// Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

/*
    basic apporach is to substracct each element in thr array with x and return the k smallest numbers left after subs in the array

    in heap approach we need to first subtractt the elements of the array with x and then sort the elements which we get after the substraction....then we put the original elements in the sorted array and retuen the first k elements

    ex: {5 6 7 8 9 } ---> subs by 7 --> {2 1 0 1 2}  -> sort -> {0 1 1 2 2}  -> put the original elements in the place of the sorted elements --> { 7 6 8 5 9}   -> ans is the first k elements

    heap me pair push karenge...ek ans jo 7 6 8 hai aur ek key jo {arr[i] -x } hai

    now for the type of heap -> we need the smallest numbers at the bottom (as they are the closest to x [as diffrerence is least]) so we use max heap as upar badi values hogi and we can pop them
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    priority_queue<pair<int, int>> pq;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push({abs(arr[i] - x), arr[i]});
        if (pq.size() > k)
        {
            pq.pop();
        }
    } 

    while (pq.empty() == false)
    {
        ans.push_back(pq.top().second);
        pq.pop();
        sort(ans.begin(), ans.end());
    }
    return ans;
};
