#include<iostream>
using namespace std;

int add(int x,int y, int z = 0){                    //HERE z is optional i.e it will take defaltt value as 0 but if we 
    return x+y+z;                                   // give 3 values then z will take up the given value
}

int main(){

int c = add(2,5);        // Z=0
int d = add(7,8,9);      // Z = 9
cout<<c<<endl;
cout<<d<<endl;
return 0;
}