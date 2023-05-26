#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int x=18;
    float y=15;

    int *ptr = &x;        
    cout<<"address stored inside ptr: "<<ptr<<endl;         
    cout<<"value present at the adddress stored in ptr :"<<*ptr<<endl;

    float *ptrr = &y;       
    cout<<"address stored inside ptrr"<<ptrr<<endl;
    cout<<"value present at address stored inside ptrr: "<<*ptrr<<endl;
    

    /* we can also change the value of x and then if we derefrence the updated value of x wil be printed*/

    //updating x with pointer

    *ptr = 50;
    cout<<"new value of x is :"<<x<<endl;
    cout<<"new value pointed by ptr: "<<*ptr<<endl;


return 0;
}