#include<iostream>
using namespace std;

int main(){
    int a=3;
    int * b= &a;                   //* &a is address of a  , * is dereference operator
    cout<<b<<endl;
    cout<<&a<<endl; 
    cout<<"The value at address b is "<<*b<<endl;        // when *b is there, simple output
return 0;                                               // is the declared variable
}