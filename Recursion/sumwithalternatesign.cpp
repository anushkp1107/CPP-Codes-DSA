/*
GIVEN A NUMBER N FIND SUM OF NATURAL NUMBERS TILL N BUT WITH ALTERNATE SIGNS
*/

#include<bits/stdc++.h>
using namespace std;


int f(int n){
    if(n==0) return 0;
    return f(n-1) + ((n%2==0) ? (-n) : (n)); //assumption that calculates sum of n-1 with alternate signs
}

int main(){
cout<<f(10)<<endl;
return 0;
}