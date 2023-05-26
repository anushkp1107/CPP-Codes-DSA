// You hav 'n'(n , <= 10^5) boxes of chocolate. Each box contains a[i] (a[i] < = 10000) chocolates. You
// need to distribute these boxes among 'm' students such that the maximum number of chocolates
// allocated to a student is minimum.
// One box will be allocated to exactly one student.
// a. All the boxes should be allocated.
// b. Each student has to be allocated at least one box.
// c.Allotment should be in contiguous order, for instance, a student cannot be allocated box 1 and
// d. box 3, skipping box 2.
// Calculate and return that minimum possible number.
// Assume that it is always possible to distribute the chocolates.
// The first line of input will contain the value of n, the number of boxes.
// The second line of input will contain the n numbers denoting the number of chocolates in each box.
// The third line will contain the m, number of students.

/*
here we have n boxes (containing some number of chocolates) and m students and we need to give it in such a way that the sum of chocolates that each student got is the minimum


ex]

12 34 67 90 chocolates and 2 students  (allocation should be in order)

now s1 - 12+34+67 --> 113   (minimuum compared to other cases so ans)
s2 --> 90
*/

#include <bits/stdc++.h>
using namespace std;

bool canDistChoc(vector<int> &arr, int mid, int s)
{
    int studentsReq = 1;
    int currSum = 0;
}

int choco(vector<int> &arr, int s)
{
    int n = arr.size();
    int lo = arr[0];
    int hi = 0;
    for (int i = 0; i < n; i++)
    {
        hi += arr[i]; // hi is the sum of the whole array
    }
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (canDistChoc(arr, mid, s))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}

//* see lec 47 Q1