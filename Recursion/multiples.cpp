/*
given a number and a value k. find k multiples of the number.
*/

#include<bits/stdc++.h>
using namespace std;

void f(int num, int k){
    if(k==0) return;
     f(num, k-1);
    cout<<num*k<<" ";
}

int main(){
 f(8,5);
return 0;
}