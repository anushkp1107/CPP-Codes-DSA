#include<iostream>
using namespace std;

int main(){

/* for(datatype of variable : array){
}*/


int array[] = {1,2,3,4}; 
int size = sizeof(array);


//FOR EACH LOOP

for(int elemnt:array){
    cout<<elemnt<<endl;             // TO PRINT NUMBERS OF AN ARRAY
}

// WHILE LOOP

int index=0;
while(index<size){
    cout<<array[index]<<endl;
    index++;
}


return 0;
}