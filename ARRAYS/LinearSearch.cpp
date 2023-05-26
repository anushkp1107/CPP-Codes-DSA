
#include<iostream>
using namespace std;

//* TO TAKE ARRAY AS INPUT FROM USER

int main(){
    int A[10];
    int n=10;
    int key;
    cout<<"Enter number: "<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

//* LINEAR SEARCH

cout<<"Enter Key"<<endl;                // KEY IS THE NUMBER WHICH THE USER WANTS TO FIND
cin>>key;
for(int i=0; i<n; i++){
    if(key==A[i]){
        cout<<"The key is:"<<i<<endl;      // <<i as we want the position where the key (number) is found
        return 0;       // HERE RETURN 0 AS IF WE FIND THE KEY THEN WE WANT THE FUNCTION TO STOP

    }
}
cout<<"key not found"<<endl;
return 0;
}