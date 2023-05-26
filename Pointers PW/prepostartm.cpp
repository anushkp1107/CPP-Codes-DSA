#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[2] = {5,4};
int *ptr = &arr[0];

cout<<ptr<<" "<<*ptr<<endl;
cout<<(*ptr)++<<endl;

cout<<arr[0]<<" "<<arr[1]<<endl;

return 0;
}

/* in *++ptr ---> first move pointer to the next element and then derefrence it*/
/* in ++*ptr ---> first derefrence and then increment the derefrenced value (also updates the value in the original place
ex if in array ... then it changes the value of the array too) */