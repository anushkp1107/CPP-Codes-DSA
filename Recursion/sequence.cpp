/*
Given a number n. Find the increasing sequence from 1 to n without using any
loop.
*/

#include<bits/stdc++.h>
using namespace std;

void f(int n){
    //base case
    if(n<1){     // as natural numbers asked
        return;
    }  // assumption--> code runs for first n-1 natural numbers
    f(n-1);            // fn prints till f(n-1)
    cout<<n<<" ";           // after n-1 we just print n
}

int main(){
    f(4);
return 0;
}