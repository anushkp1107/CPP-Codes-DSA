// MERGE TWO BINARY MAX-HEAP

/*
    two vectos given...we need to merge tham and then use the heapify algo to make a heap
*/

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i) // i is the index jisko sahi jagah pe pahuchana hai
{
    // 1 based indexing
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n and arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n and arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    { // agar largest i nhi hai matlab upar wle if conditions me change hua hai

        swap(arr[largest], arr[i]);
        heapify(arr, n, largest); // aage ka tree check kar rhe
    }
}

vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m)
{
    // merge both arrays
    vector<int> ans;

    for (auto i : a)
        ans.push_back(i);
    for (auto i : b)
        ans.push_back(i);
    // build heap using merged array
    // heapify wla for loop

    int size = ans.size();
    for (int i = size / 2; i > 0; i++)
    {
        heapify(ans, n, i);
    }
    return ans;
}
