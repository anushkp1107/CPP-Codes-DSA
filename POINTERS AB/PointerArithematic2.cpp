#include<iostream>
using namespace std;

int main(){

int A[5] = {2,4,6,8,10};
int *p = A, *q = &A[4];

cout<<q-p<<endl;          //  shows they are 4 elements away from each other
cout<<p-q<<endl;          // - means that the second pointer is far away


return 0;
}