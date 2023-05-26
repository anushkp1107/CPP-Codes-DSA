#include<iostream>
using namespace std;

void swap(int a , int b) {

    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;            // VLAUES OF THESE SWAPPED
}

int main(){

    int x=10, y=20;
    swap(x,y);
    cout<<x<<endl;            
    cout<<y<<endl;
    
return 0;
}