/*
    as the root element will be the max element as it is a max heap so swap the  root element with the last element and do size--

    root node ko correct position pe le jao

    keep doing this till heap ka size is

*/

#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void heapSort(int arr[], int n)
    {
        int size = n;

        while (size > 1)
        {
            // swap
            swap(arr[size], arr[1]);
            size--;

            // node ko sahi jagah pe le jao
            heapify(arr, size, 1);
        }
    }
};

int main()
{

    return 0;
}
