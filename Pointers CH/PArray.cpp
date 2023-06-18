// Pointers and arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10] = {2, 5, 8, 9, 7, 5, 4, 5};

    cout << "address of first memory block is " << arr << endl;
    cout << "address of first memory block is " << &arr[0] << endl;
    cout << "address of first memory block is " << *arr << endl;
    cout << "address of first memory block is " << *arr + 1 << endl;
    cout << "address of first memory block is " << *(arr + 1) << endl;

    // only arr returns the address of the first element only and &arr[0] does the same
    // both arr and &arr do the same thing aas they both point to the same address
    // (*arr) prints the value at the 0thlocation address
    //[] *(arr + 1) prints the value at the 1st location address 

    funct(int *arr)
    {
        int arr[6] = {1, 2, 3, 4, 5, 6};

        cout << Funct(arr + 3) << endl; // only the array after the 2nd index is passed in thr function
    }

    return 0;


            
}


