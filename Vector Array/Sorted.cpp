//* CHECK IF ARRAY IS SORTED OR NOT
//* SORTED IS IN ASCENDING ORDER

#include<iostream>
using namespace std;

int main(){

int array[] = {1,2,3,4,5,6};

bool sorted=true;

for(int i=0; i<6; i++){
    if(array[i]<array[i-1]){
        sorted=false;
    }
}

cout<<sorted<<endl;                 //*  1 is true and 0 means false

return 0;
}


// code dosn't work