#include<iostream>
using namespace std;

int main(){

// INPUT OF ARRAY FROM USER USING FOR LOOP

char vowels[5];

for(int i=0;i<5;i++){
    cin>>vowels[i]; 
}


for(int i=0;i<5;i++){
    cout<<vowels[i]<<" "; 
}



return 0;
}