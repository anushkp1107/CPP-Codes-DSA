#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i=1; i<=n; i++){
    for(int j=1;j<=n; j++){
        cout<<j;                                       // TILL THIS PART FOR PRINTING THE RECTANGLE
}                                                      
    for(int j=1; j<=(i-1); j++){                       // THIS TO PRINT SPECEFIC NUMBERS
        cout<<j;
    }
       cout<<endl;
    }


return 0;
}