// pw skills lec 45

/* Given an array of integers 'a' that is sorted in non-decreasing(ascending) order. Find the first and the last position of the given 'target' element in the sorted array. Follow 0-based indexing.
If 'target' is not found in the array, return [-1, -1]
*/

/*
solve in 2 parts by findind the first and last occurences seperatly and combinig them in an array to get the ans

to get the first occurence, apporach similar to previous problems

to get the last element we can get the index of the first element > 3 and the elemnt just before that will be the last element of our target which is the required answer
*/

//* code from codehelp lec 13

#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int lo = 0;
    int hi = n - 1;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == k)
        {
            ans == mid;
            hi = mid - 1;
        }

        else if (arr[mid] < k)
        {
            lo = mid + 1;
        }
        else if (arr[mid] > k)
        {
            hi = mid - 1;
        }
        return ans;
    }
}

int lastOcc(int arr[], int n, int k)
{
    int lo = 0;
    int hi = n - 1;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] == k)
        {
            ans == mid;
            lo = mid + 1;
        }

        else if (arr[mid] < k)
        {
            lo = mid + 1;
        }
        else if (arr[mid] > k)
        {
            hi = mid - 1;
        }
        return ans;
    }
}

int main()
{
    
    return 0;
}