/*
FIND MAX ELEMENT OF THE ARRAY USING RECURSION

*/

#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int idx, int n)
{
    if (idx == n - 1)
    {
        return arr[idx];
    }
    return max(arr[idx], f(arr, idx + 1, n));
}

int main()
{

    int arr[] = {3, 10, 2, 5, 3};
    int n = 5;
    cout << f(arr, 0, n);
    return 0;
}