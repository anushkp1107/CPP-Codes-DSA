#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, int mid, int n, int m)
{
    int student = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum > mid)
        {
            student++;
            sum = arr[i];
        }
        if (student > m)
            return 0;
    }
    return 1;
}

int findPages(vector<int> &arr, int n, int m)
{
    // code here
    if (n < m)
        return -1;
    int end = 0, start = 0;
    for (int i = 0; i < n; i++)
    {
        end += arr[i];
        start = max(start, arr[i]);
    }
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(arr, mid, n, m))
        {
            res = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return res;
};
