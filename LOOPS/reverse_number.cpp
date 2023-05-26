#include<iostream>
using namespace std;

int main(){
int reverse = 0;
int r;
int n;

cout<<"NUMBER:";
cin>>n;

while(n > 0){
    r = n % 10;
    n = n / 10;
    reverse = reverse * 10 + r;
}
cout<<"REVERSE NUMBER IS :"<<reverse<<endl;
return 0;
}