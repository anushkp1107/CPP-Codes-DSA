#include <bits/stdc++.h>
using namespace std;

int partition(int arr[] , int s , int e){
    
    int pivot = arr[s];  // take pivot as the first element

    int cnt = 0; // initiliased a count to count the number of elements smaller than pivot
    for(int i=s+1; i<=e ; i++){
        if(arr[i] <= pivot){
            cnt++;   //counted the number of digits smaller than pivot
        }
    }

    int pivotIndex = s + cnt;   // as cnt is the count of elements smaller than 
    //pivot so pivot will be after those elements so this function was to find the right place for pivot
    swap(arr[pivotIndex] , arr[s]); // as we first took first element as pivot so now swap 
    //that first element with the right place of the pivot which is the pivotIndex

        // now sort the left and right parts
    int i=s ,  j = e;

    while(i < pivotIndex &&  j  > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex &&  j  > pivotIndex){  // if signifies that the above 2 conditions 
        // were not met and hence swap them to put them  in the  right position
            swap(arr[i++] , arr[j--]);  // arr[i++] means swap them and then incremenet i by 1
        }
    }

    return  pivotIndex;

}

void quicksort(int arr[] , int s, int e){
    //base case
    if(s >= e) return;

    //partition
    int p = partition(arr , s , e);    // declared a partion and then sort parts before and after the partition

    //left part sort
    quicksort(arr , s, p-1); 

    //right part sort
    quicksort(arr , p+1 , e);
}

int main(){

int arr[] = {2,4,1,6,9};
int n = 5;

quicksort(arr , 0 , n-1);

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}cout<<endl;


return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// int partition(int arr[] , int first , int last){
//     int pivot = arr[last];
//     int i = first-1; //for inserting elements < pivot
//     int j = first;  //for finding elements < pivot 
//     for(;j<last;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }

//     // now i is pointing to the last elementt < pivot
//     // correct position for pivot will be i+1

//     swap(arr[i+1] , arr[last]);
//     return i+1;
// }

// void quickSort(int arr[], int first , int last){
//     // base case
//     if(first>=last){
//          return; 
//     }
    
//     //recursive case
//     int pi = partition(arr,first,last);
//     quickSort(arr,first,pi-1);
//     quickSort(arr,pi+1,last);
// }

// int main(){

// int arr[] = {20,12,35,16,18,30};
// int n = sizeof(arr)/sizeof(arr[0]);

// quickSort(arr,0,n-1);

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }cout<<endl;

// return 0;
//}