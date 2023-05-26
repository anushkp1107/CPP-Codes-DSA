#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &input , int target){
    //define search space
    int lo = 0;  //start of the search space
    int hi = input.size()-1;  // end of the search space
    while(lo <= hi){
        //calc midpoint for the search space
        int  mid = lo + (hi - lo)/2;
        if(input[mid] == target) return mid;
        else if(input[mid] < target){
            // discard the left part of mid as target is not in btwn them
            lo = mid + 1;
        }else{
            //discard the right side
            hi = mid - 1;
        }
    }

    return -1;   // if none of the cases hit, return -1
}

int binarySearchRecursive(vector<int> &input , int target , int lo, int hi){
    if(lo > hi) return -1;
        int  mid = lo + (hi - lo)/2;
    if(input[mid] == target) return mid;
    if(input[mid] < target ){
        return binarySearchRecursive(input, target , mid+1 , hi);
    }else{
        return binarySearchRecursive(input, target , lo , mid-1);
    }
}

int main(){

vector<int> input {2,4,5,7,15,24,45,50};
int target = 15;
cout<<binarySearchRecursive(input , target , 0 , input.size()-1)<<endl;
return 0;
}


/*
TC == O(logn)
SC == 0(logn)
*/


/*

    to prevent integer overflow in mid calculaiton new formula --->

    mid == lo + (hi - lo) /2 

*/