// Rotate the given array 'a' by k steps, where k is non-negative.
// Note: k can be greater than n as well where n is the size of
// array 'a'.


#include<iostream>
using namespace std;

int main(){

int array[]={1,2,3,4,5};
int n=5;
int k=2;

k=k%n;

int ansarray[5];
int j=0;

//inserting last n-k elements

for(int i=n-k;i<n;i++){                                 //* HERE I=N-K AS THAT IS THE POINT WHERE WE WANT TO START 
ansarray[j++]=array[i];                                 //* PRINTING THE ELEMNTS
}

//inserting first n-k elemnts

for(int i=0;i<n;i++){
    ansarray[j++]=array[i];
}

//to print the array

for(int i=0;i<n;i++){
    cout<<ansarray[i]<<" ";
}

return 0;
}