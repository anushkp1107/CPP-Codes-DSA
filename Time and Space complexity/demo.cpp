#include<iostream>
using namespace std;

    // int suminrange(int x, int y){
    //     int result=0;
    //     for(int i=x;i<=y;i++){
    //         result = result+i;
    //     }
    //     return result;
    // }

    int suminrangeoptimised(int x, int y){
        int n=(y-x+1);                // ARITHEMATIC PROGRESSION FORMULA
        int a=x; // a is first term
        int result = (n * (2*a +(n-1)*1))/2;
        return result;
    }

int main(){

    cout<<suminrangeoptimised(1,60);

return 0;
}