// av heaps playlist --> https://www.youtube.com/watch?v=3DdP6Ef8YZM&list=PL_z_8CaSLPWdtY9W22VjnPxG30CXNZpI9&index=3

// Return K largest elements in the array

/*
    basic approach is to sort

    heap approach-> largest de rakha hai so min heap lagega
    push karo elements till size > k aur jab k se greater ho jayega size to pop kardo top element ko aur jo elements bachenge wo ans hoga aur print karne ke liye while heap ka size is > 0 tab tak heap ka top ko print karte raho aur pop karte raho
*/

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = l; i < r; i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }

    // print all the elements left in the heap as that is the ans
    while (pq.size() > 0)
    {
        cout << pq.top() << endl;
        pq.pop(); // print karke pop kardo to print the next element in the next fnct call
    }
}