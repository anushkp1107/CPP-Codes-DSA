#include<iostream>
using namespace std;

int main(){

int a[5] = {2,4,6,8,10};
int key;

cout<<"enter key";
cin>>key;

//* ITERATIVE METHOD

 int binarySearch(int a[], int key) {
    
    int low = 0, high = a.length-1; 

    while (low <= high){
        int mid = low + high / 2;
        if(a[mid]==key){
            return mid;
        }
        else if(key>a[mid]){
            low = mid + 1;
        }

        else{
            high = mid-1;
        }
    }
    return -1;                     //* when low > high return -1 i.e not possible
}

return 0;
}

