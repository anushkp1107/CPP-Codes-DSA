// Given an array 'arr'of integer numbers, represents the number of pages in the 'i-th'
// book.
// There are 'm' number of students, and the task is to allocate all the books to the students.
// Allocate books in such a way that:
// • Each student gets at least one book.
// • Each book should be allocated to a student.
// • Book allocation should be in a contiguous manner.
// You have to allocate the books to ‘m’ students such that the maximum number of pages assigned to a student is minimum.

//* CH lec 15

/*
see copy
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m or arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
    int lo = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // sum of the given elemtnts
    }

    int hi = sum;
    int ans = -1;
    int mid = lo + (hi - lo) / 2;

    while (lo <= hi)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid; // is ans possibble go to left part and discard right part
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1; // no soln exists so go to right part
        }
    }
    return ans;
}

int main()
{

    return 0;
}