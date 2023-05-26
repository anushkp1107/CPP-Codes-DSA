#include<iostream>
using namespace std;

int main(){

int x,y;
cin>>x>>y;

int *ptrx = &x;    //&x fetches adress of x and we then store it in a integer pointer
int *ptry = &y;

int result;

int *ptrresult = &result;

*ptrresult = *ptrx + *ptry;

cout<<"The sum of the numbers are : "<<*ptrresult<<endl<<result<<endl; 



return 0;
}