/* Given a vector arr[l] **sorted** in increasing order of n Size and an integer x, find if there exists
a pair in the array whose sum is exactly x. */
 
#include <bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {-2,-1,0,3,6,8,11,12};
int x = 14;
int n=8;

int i=0;
int j=n-1;
bool found = false;

while(i<j){
    if(arr[i] + arr[j] == x){
        //we found a pair
        found =true;
        break;
    }else if(arr[i]+ arr[j] < x){
        // the sum is smaller than x so we need to increase the sum and move i to a bigger number to get close to the number 14
        i++;
    }else{
        //sum is more than x and so we need to increse the sum and hence move j to a bigger number
        j--;
    }
}

if(found == true){
    cout<<"Yes";
}else{
    cout<<"No";
}

return 0;
}