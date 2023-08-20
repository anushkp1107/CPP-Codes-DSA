

/*
    swap 1st node with last node
    remove last node
    propagate root node to its correct position by checking if root is > than child nodes
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

    void deletefromHeap()
    {
        if (size == 0)
        {
            cout << "cant delete" << endl;
            return;
        }

        // stp 1: put last element in first index
        arr[1] = arr[size];
        // step 2: remove last element
        size--;

        // step 3: take root node to currenrt posiiton
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size and arr[i] < arr[leftIndex] and arr[leftIndex] > arr[rightIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size and arr[i] < arr[rightIndex] and arr[rightIndex] > arr[leftIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};
