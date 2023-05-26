//! Program for factorial of a number.

// [REV REV REV REV THIS]



//* TRY SELF




//* FOR AND IF BOTH LOOPS USED



//* USE % WHICH RETURNS THE REMAINDER AFTER DIVING






















#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
    cout<<"Enter the number brev :";
    cin>>n;

 for(int i=1; i<=n; i++){
    if(n%i == 0){
        cout<<i<<endl;
    }
 }
return 0;
}