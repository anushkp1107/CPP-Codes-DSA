#include<iostream>
using namespace std;

void swap(int &a , int b){

    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){

int x=50, y=100;
swap(x, y);
cout<<x<<" "<<y<<endl;

return 0;
}