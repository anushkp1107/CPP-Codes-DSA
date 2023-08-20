// array of elements dia hai...usko heap me convert karo

// ek node ko uski sahi jagah pe le jaana heapify algo hota hai

//

// https://www.youtube.com/watch?v=UVW0NfG_YWA&list=PLUcsbZa0qzu3yNzzAxgvSgRobdUUJvz7p&index=32

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

    void heapify(int arr[], int n, int i) // i is the index jisko sahi jagah pe pahuchana hai
    {

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
};

int main()
{
    int arr[6] = {-1, 54, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    return 0;
}

/*

    0 based indexing    -> i = (n/2)-1 se  , >=0 tak tak non leaf nodes hai ==> left = 2*i+1   right = 2*i+2

    1 based indexing   -> i= n/2 se , >0 tak non leaf nodes hai ==> left = 2*i     right = 2*i+1


*/