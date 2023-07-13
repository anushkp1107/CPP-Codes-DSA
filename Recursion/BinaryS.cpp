#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(int *arr, int s, int e, int k)
{
    // base cases

    // 1) element not found
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;

    // 2) element found
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return BinarySearch(arr, mid + 1, e, k);
    }

    else
    {
        return BinarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 18;

    cout << "present or not : " << BinarySearch(arr, 0, 5, key) << endl;
    return 0;
}