// A peak element is an element that is strictly greater than its neighbors.
// Given a 0-indexed integer array nums, find a peak element, and return its index.
// If the array contains multiple peaks, return the index to any of the peaks.
// You may imagine that nums[-1] = nums[n] = -infinity. In other words, an element is
// always considered to be strictly greater than a neighbor that is outside the array.

/*
Input :
Array [1,2,1,2,6,10,3]

Output :
Either index 1 or index 5 are the correct OUtPUt. At index 1, 2 is the peak element and at index 5, 10 is the peak
element.
*/


/*
here multiple peak elements are there. 
if we find mid in a increasing curve then we are sure that there is definatly a peak(element) in the right side and not so sure on the left side. similarly for a decresing curve there definately is a curve on the left side and not so sure about right side.do with this logic we can discard the non needed space and optimise the soln
*/

#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> &v){
    int n= v.size();
    int lo = 0; int hi = n-1;
    while(lo<= hi){
        int mid = lo + (hi-lo) /2;
        if(mid == 0){   // oth index
            if(v[mid] > v[mid+1] ){
                return 0;
            }else{
                return 1;
            }
        }
        else if(mid == n-1){
            if(v[mid] > v[mid-1]){
                return n-1;
            }else{
                return n-2;
            }
        }
        else{
            if(v[mid] > v[mid+1] and v[mid] > v[mid-1]){
                return mid;
            }else if(v[mid] > v[mid-1]){
                //inc curve
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }   
    }
    return -1;

}

int main(){



return 0;
}