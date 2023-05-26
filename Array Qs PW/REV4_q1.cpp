// Given two vectors arr[1] and arr[2] of size m and n sorted in increasing order. Merge the
// two arrays into a single sorted array of size m+n.

// PW SKILLS REV 4 ARRAYS VDO

#include <bits/stdc++.h>
using namespace std;

int main(){

int arr1[] = {1,6,7,10};
int arr2[] = {0,1,3,8,11,12,15,18};
int m=4;
int n=8;

//code to merge 2 arrays

int result[m+n];
int i=0;   // helps to iterate on arr1
int j=0;   // helps to iterate over arr2
int k=0;   // helps to iterate over result array

while(i<m and j<n){              // while both the arrays are not exhausted
    if(arr1[i]<arr2[j]){
        result[k] = arr1[i];
        i++;
        k++;
    }else{
        result[k] = arr2[j];
        j++;
        k++; 
    }
} 

while(i<m){
    // this case means arr2 was exhausted and we still ahve elements left in arr1
    result[k] = arr1[i];
    i++;
    k++;
}

while (j<n){
    // this case means that arr1 was exhaused and we still have elements left in arr2
    result[k] = arr2[j];
    j++;
    k++;
}

// output the resultant array
for(int i=0;i<m+n;i++){
    cout<<result[i]<<" ";
}cout<<endl;

return 0;
}