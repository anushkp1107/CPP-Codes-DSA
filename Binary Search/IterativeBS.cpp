#include <bits/stdc++.h>
using namespace std;

// ITERATIVE BS

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

int main(){

vector<int> input {2,4,5,7,15,24,45,50};
int target = 15;
cout<<binarySearch(input , target)<<endl;
return 0;
}

/*
TC ==> with each search we are dividing the search space by 2 
so N/2 -- N/4 -- N/8-------------- 1  
so //*TC = O(logn)

SC ===>//* SC = O(1)
*/