#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int f(int n){
    //base case
    if(n==1) return 1;
    int ans = n*f(n-1);
    return ans;
}

int main(){
int result = f(5);
cout<<result;
return 0;
}


/* 
space complexity is O(n) as there are n number of recursive calls so n stack frames (with only variables so considered cosntant)
*/

/*
time complexity : no. of times function is called  X  time consumed in one single call.
here n times called and x some constant ----> O(n). 
*/