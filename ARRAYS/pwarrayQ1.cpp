#include<iostream>

//* REV THIS

using namespace std;

int main(){

int oddeven[5];
int i;
int count_odd=0;
int count_even=0;

for(int i=0;i<=5; i++){
    cin>>oddeven[i];
}

if(oddeven[i]%2==0){
    count_odd++;

}


    return count_odd;
}