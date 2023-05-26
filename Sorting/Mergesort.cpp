#include <bits/stdc++.h>
using namespace std;

void merge(int arr[] , int l, int r, int mid){
    int an = mid -l + 1;   
    int bn = r - mid;
    //create two temporary arrays
    int a[an];    //size of a array
    int b[bn];

    for(int i=0;i<an;i++){
        a[i] = arr[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j] = arr[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<an and j<bn){
            if(a[i]<b[j]){
            arr[k++] = a[i++];  // first updates the values and then k++ and i++ occurs (increments)
            }
        else{
             arr[k++] = b[j++];
        }
    }

    while(i<an){                         // if one of the arrys is not finished while the other is finished
        arr[k++] = a[i++];
    }
    while(j<bn){
        arr[k++] = b[j++];
    }
}

void mergeSort(int arr[], int l, int r){
    // base case
    if(l>=r){
         return;
    }

    int mid = (l+r)/2;
    mergeSort(arr,l,mid);   //recurisve function to sort from l to mid
    mergeSort(arr,mid+1,r);   //recurisve function to sort from mid + 1 to r
    merge(arr,l,mid,r);  //merge tjhe above two arrays
}

int main(){
int arr[] = {10,28,24,6,34,18,38,44};
int n = sizeof(arr) / sizeof(arr[0]);   // to find the number of elements

mergeSort(arr,0,n-1);   // sort the array from 0 to n-1

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}cout<<endl;
return 0;
}