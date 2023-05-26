// Given an array of n integers and a target value x.Print whether x exists in the
// array or not.

#include<bits/stdc++.h>
using namespace std;

// f represents whether x is present in the range [i,n-1] or not?
bool f(int arr[], int n, int i, int x) {
    //base case
    if(i==n) {
    //array is exhausted i.e all elements are traversed
    return false;
    }
    return (arr[i] == x) || f(arr, n , i+1 , x);   // check whether x is the first element or whether it 
                                                  // is present in i+1
}


int main(){
int arr[] = {5,2,3,4,78,6,4,8,9,20};
int n=10;
int x = 26;  // element to be found
bool result = f(arr , n , 0, x);
if(result == true) cout<<"YES";
else cout<<"NO";
return 0;
}