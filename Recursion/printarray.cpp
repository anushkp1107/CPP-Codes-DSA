/*
GIVEN AN ARRAY. PRINT ALL THE ELEMENTS OF THE ARRAY RECURSIVELY.
*/

#include<bits/stdc++.h>
using namespace std;

void f(int arr[], int idx, int n){         // can use arr[] or *arr both work
    if(idx==n) return;  // array has ended
    cout<<arr[idx]<<endl;
    f(arr, idx+1,n);
}

int main(){

int n=5;
int arr[] = {7,6,8,4,8,0};
f(arr,0,n);

return 0;
}