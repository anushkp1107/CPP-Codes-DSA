#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

for(int i=0;i<n;i++){
    for(int j=1; j<=(n-1); j++){
        if(i==1 || j==1 || i==n || j==n){
            cout<<i<<endl;
        }
        else{
            cout<<" ";
        }
    }
}

cout<<endl;
return 0;
}