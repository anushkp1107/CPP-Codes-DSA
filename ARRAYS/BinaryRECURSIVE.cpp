#include<iostream>
using namespace std;

int main(){

int binarySearch(int a[], int key, int low, int mid, int high) {
    if(low>high){
        return -1;
    }

    int mid = low + high/2

    if(a[mid]==key){
        return mid;
    }

    if(key>a[mid]){
        return binarySearch(a, key mid + 1,high);
    }

    return binarySearch(a, key, low, mid-1);     //* inside () directly proportional from upper int function

}

return 0;
}