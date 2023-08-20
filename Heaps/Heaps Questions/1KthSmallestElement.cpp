// Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct. l and r denotes the starting and ending index of the array.

/*
    algo 1 ->
    sort the array in asc order and then the [K-1]th element is aslways the ans
    TC -> Nlogn

    algo2->

    as smallest bola hai to max heap lagega --> we bring tc from nlogn to nlogk

    heap ka size hamesha less than k hi rakhna hai..agar greater ho gya to top element ko pop kardo...and after this jo top ka element hoga whi apna ans hoga
*/

// #include <bits/stdc++.h>
// using namespace std;

// int kthSmallest(int arr[], int l, int r, int k)
// {

//     priority_queue<int> pq;

//     // first k elements ko insert
//     for (int i = 0; i < k; i++)
//     {
//         pq.push(arr[i]);
//     }

//     // remaining elements ko add cro
//     for (int i = k; i <= r; i++)
//     {
//         if (arr[i] < pq.top())
//         {
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }

//     // ans is pq.top()
//     int ans = pq.top();
//     return ans;
// }

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int> maxH;

    for (int i = l; i <= r; i++)
    {
        maxH.push(arr[i]);
        if (maxH.size() > k)
        {
            maxH.pop();
        }
    }
    return maxH.top();
}
