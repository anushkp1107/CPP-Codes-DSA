/*
check if array sorted or not using recusrion
*/

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0 or size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    bool ans = isSorted(arr, size);

    if (ans)
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << "not sorted" << endl;
    }
    return 0;
}
