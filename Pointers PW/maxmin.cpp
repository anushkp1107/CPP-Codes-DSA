// - Write a function that returns the largest and the smallest number out of 3 given numbers.
// The main function should call this function to get the largest and smallest number and print
// the output.


//* without function solution --->

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

int x,y,z;
cin>>x>>y>>z;

int *largest = max(&x,max(&y,&z));
int *smallest = min(&x,min(&y,&z));

cout<<*largest<<" "<<*smallest<<endl;

return 0;
}

//* function solution  [wrong code]:

// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;

// int largestandSmallest(int x,int y,int z){
//     int *largest = max(&x,max(&y,&z));
//     int *smallest = min(&x,min(&y,&z));
//     cout<<*largest<<" "<<*smallest<<endl;
//     return largestandSmallest(int x,int y,int z);
// }

// int main(){

// int x,y,z;  
// cin>>x>>y>>z;

// largestandSmallest(int x, int y,int z);

// return 0;
// }

