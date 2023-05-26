// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose absolute difference is exactly x.   (1:06:32)

// ANS:

/* use two pointers at i and i+1 as two pointers at two differnt ends wont work*/
/*
    here when sum is > x ----> do i++ so that the difference of the two numbers decreases

    and if the sum is < x -----> do j++ so that j goes to a higher number and the diffrence of the two numbers decreses
*/


#include <bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {5,10,15,20,26};
int n=5;
int x=10;

int i=0;
int j=1;
bool found=false;
while(i<n and j<n){
    if(abs(arr[i] - arr[j]) ==x){
        found ==true;
        break;
    }else if(abs(arr[i] - arr[j]) < x){
        j++;
    }else {
        i++;
     }
}

if (found ==true){
    cout<<"yes";
}else{
    cout<<"no";
}




return 0;
}