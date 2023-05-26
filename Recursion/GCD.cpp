// Given two numbers x and y. Find the greatest common divisor of x and y using
// recursion.

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b > a) return gcd(b , a);
    if(b==0) return a;  //base case
    return gcd(b, a%b);
}


int main(){

int x = gcd(48,40);
cout<<x<<endl; 

return 0;
}