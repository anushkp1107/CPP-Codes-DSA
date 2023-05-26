#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){

    cout<<sum(10,5)<<endl;
    cout<<sum(12.5f,10.5f)<<endl;               // IMP TO PUT F TO SPECIFY FLOAT
    cout<<sum(7,8,9)<<endl;

return 0;
}