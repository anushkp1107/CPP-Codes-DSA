//Find the total number of pairs in the
// Array whose sum is equal to the given
// value x.



#include<iostream>
using namespace std;

int main(){

int array[] = {3,4,7,6,1};
int targetsum = 7;
int pair=0;

int sizeofarray=5;

for(int i=0;i<sizeofarray;i++){
    for(int j=i+1; j<sizeofarray;j++){
        if(array[i] + array[j]== targetsum){
            pair++;
        }
    }
}

cout<<pair<<endl;

return 0;
}