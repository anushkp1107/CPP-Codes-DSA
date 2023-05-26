#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

int x=20;
int *ptr = &x;

cout<<"size of int x is: "<<sizeof(x)<<endl;

return 0;
}


/* when we do ptr + 1 we get the adress of the pointer which is right next to the original pointer.....
similar with ptr -1*/