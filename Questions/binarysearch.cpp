#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start<=end){
        int element = arr[mid];

        if(element == key){
            return mid;
        }
        else if(key<element){
            // search in left
            end = mid - 1;
        }
        else{
            start = mid + 1;
        } 

        mid = start + (end - start)/2;

    }
    return -1;
}

int main()
{
    int arr[] = {2,3,4,5,6,7,82,9};
    int size = 8;
    int key = 2;

    int indexOftarget = binarySearch(arr, size, key);

    if(indexOftarget == -1){
        cout<<"target not found" << endl;
    }
    else{
        cout<<"target found at " << indexOftarget << endl;
    }
    return 0;
}