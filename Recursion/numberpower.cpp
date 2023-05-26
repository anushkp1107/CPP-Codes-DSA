/*
    Given two numbers p & q, find the value pAq using a recursive
    function.
*/

#include<bits/stdc++.h>
using namespace std;

int f(int p, int q){
    if(q==0) return 1;
    return p * f(p, q-1);
}

int main(){

int result = f(3,4);
cout<<result<<endl;
return 0;
}