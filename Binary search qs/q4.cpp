/*
A rotated sorted array array is a sorted array on which rotation operation
has been performed some number of times. Given a rotated sorted
array, find the index of the minimum element in the array [pivot]. Follow 0-based
indexing. It is guaranteed that all the elements in the array are unique.
*/

/*
 how to know sorted array or sorted rotated array?

 if 0th index element is less than last index element then it is a sorted array and not rotated
 it is a sorted rotated array

 if 0th index element is greater than the last element index then
 now we find the mid element and if the mid element is lower than the first element (lo) means mid was put there by rotating the array (putting the back element in the front one by one) and so now the min index cannot be on the left as all the elements which were at the back at first are now at the front so the min element will def be at the right.

 now if mid is greater than lo means the smallest element is at the left of the mid index and so hi = mid-1 i.e discard right side

 terminating condns == if a[mid] > a[mid+1] -->  mid+1 is the ans

 if a[mid] < a[mid-1] --> a[mid] is the ans
*/

#include <bits/stdc++.h>
using namespace std;

int findMinimum(vector<int> &input)
{
    if (input.size() == 1)
        return input[0];
    int lo = 0;
    int hi = input.size() - 1;
    if (input[lo] < input[hi])
    { // already sorted
        return lo;
    }
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] > input[mid + 1])
            return mid + 1;
        if (input[mid] < input[mid - 1])
            return mid;
        if (input[mid] > input[lo])
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        input.push_back(x);
    }
    cout << findMinimum(input) << endl;
    return 0;
}