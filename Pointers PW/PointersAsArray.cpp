#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void process(int *arr,  int size){
    // inside this function we have the access of the same array as in the main
    for(int i=0;i<size;i++){
        cout<<*(arr+1)<<endl;
    }
     *(arr+1)=33;
}

int main(){

    int arr[3] = {5,1,2};
    process(arr , 3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}

/* to store the adress of the whole array as a pointer */


#include<bits/stdc++.h>
using namespace std;

int main(){

int a[3] = {11,12,13};
int (*ptr)[3] = &a;              /*()[3]----> here [3] is to define the size of the array*/
cout<<ptr<<" "<<a<<" "<<*ptr<<" "<<*a<<endl;
return 0;
}