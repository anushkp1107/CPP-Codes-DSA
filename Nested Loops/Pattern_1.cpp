#include<iostream>
using namespace std;

int main(){

int count=1;

for(int i=0; i<4; i++){           // this loop to print below loop for 5 times

    for(int j=0; j<4; j++){         // this loop prints from 1 to 5

        cout<<count++<<" ";
    }

    cout<<endl;    // NEW LINE
}

return 0;
}