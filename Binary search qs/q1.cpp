// Find the first occurrence of a given element x, given that the given array is sorted.
// If no occurrence of x is found then return -1.

/*
we can find a occurance by binary search...it may or may not be the first
occurence...now after we found that we do not need to check the right side of 
value we got as first occurene must be at the left side and it cannot be on 
the right (hi becomes mid - 1) to go to right side and (lo = mid+1)
 to go to left side...now keep calulating mid 
*/

#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &input , int target){
    int lo=0;
    int hi = input.size()-1;
    int ans = -1;

    while(lo <= hi){
       int mid = lo + (hi-lo) / 2;
       if(input[mid] == target){
        ans == mid;
        hi = mid-1;  // either the index we got is the ans or some better as is in the lest side so this hi thing used 
       } else if(input[mid] > target){
        hi = mid-1;
       }else{
        lo = mid+1;
       }
    }
    return ans;
}   

int main(){
int n;
 cin>>n;
vector<int> arr;
for(int i=0;i<n;i++){
    int x; cin>>x;
    arr.push_back(x);
}
int target; 
cin>>target;
cout<<firstOccurence(arr, target)<<endl;
return 0;
}