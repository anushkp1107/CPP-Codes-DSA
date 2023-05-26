#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

    // int x=10;
    // cout<<&x;    // & returns address of x

    int x=18;
    float y=15;

    /*create a pointer that can store address of x ;
    as x is an integer variable , so we need a pointer that can store interger type data*/

    int *ptr = &x;        // this returns the address of the integer bucket x
    cout<<ptr<<endl;

    float *ptrr = &y;        // this returns the address of the float integer bucket y 
    cout<<ptrr<<endl;

return 0;
}


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

int *ptr;           // only declaring the pointer

cout<<ptr<<endl;

int marks = 90;

ptr = &marks;     // re assigning or updating the pointer soo no need of * aka stored the interger value address
                  // in the pointer

cout<<ptr<<endl;

return 0;
}