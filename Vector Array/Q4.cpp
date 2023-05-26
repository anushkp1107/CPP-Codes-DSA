//* FIND THE DIFFRENCE BETTWEEN  THE SUM OF ELEMENTS AT EVEN INDICES TO THE SUM OF ELEMENTS AT ODD INDICES

#include<iostream>
using namespace std;

int main(){

int array[] = {1,2,1,2,1,2};

int anssum = 0;
for(int i=0;i<6;i++){
    if(i%2==0){
        anssum+=array[i];
    }
    else{
        anssum-=array[i];
    }
}

cout<<anssum<<endl;

return 0;
}