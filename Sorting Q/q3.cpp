// Write a Program to find Kth smallest element in an array using
// QuickSort.

/*
    ALGORITHM-->
    kth smallest element will be in the k-1 th position

    pseudocode--->
    pos = partiton fucntion
    now if pos-l == k-1;  return; pos is the index of the pivot element and l is the index of the 1st element (0).
    if pos-l > k-1 --> pivot element is after the kth smallest element  
    so we call recursive fnct on the left subarray
    if pos-l < k-1 ---> recursive fn on the right side of the partition

    now ex == [3,5,2,1,4] 6 [7,8] and k=7
    here pivot < k-1 so we need to sort right subarray
    so now we alter k value so it will become k = k-(pos-l+1)
*/


#include <bits/stdc++.h>
using namespace std;

int partition(int arr[] ,int l , int r){
    int pivot = arr[r];

    int i=l;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}

int kthSmallest(int arr[] , int l , int r , int k){

    if(k>0 and k=r-l+1){

        int pos = partition(arr, l , r); //position of pivot ele

        if(pos-l == k-1){
            return arr[pos]; //return pivot element
        }

        else if(pos-l > k-1){
            kthSmallest(arr , l , pos-1 , k); 
        }
        else{
            kthSmallest(arr , pos+1 , r , k-pos+l-1); 
        }
    }
    return INT_MAX;

}


int main(){

int arr[] = {3,5,2,1,4,7,8,6};
int n = sizeof(arr)/sizeof(arr[0]);
int k=5;

cout<<kthSmallest(arr,0,n-1,k)<<endl;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;


return 0;
}