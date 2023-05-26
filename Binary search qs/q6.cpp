/*  Given a mountain array 'a' of length greater than 3, return the index 'i' such that arr[0]
 < arr[l] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1]. This index is known as the peak index.
 mountain array is the array in which the elements first inc and then there is a sudden decrease...we need to find the peak index i.e after which the elements starts decreasing  
 ex) 0 4 1 0 -------> ans is 1 as the index of the peak element is 1
 */

 

/*
now we apply binary search and find the mid element. if the mid element is present in the increasing curve then the ans will be only at the right side and we can discard the left part. If the mid element is present in the decreasing curve then the peak element will definately be at the left side and we can discard the right part.
*/

/*
now to understand if the elemnt is in increasing curve or not we can check if 
 [mid -1] < [mid]. if true then increasing curve otherwise decreasing   
*/


#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> &v){
    int lo=0; int hi=v.size()-1;
    int ans = -1;
        while(lo <= hi){
            int mid = lo + (hi - lo )/2;
            if(v[mid-1] < v[mid]){ //inc curve
                ans = max(ans , mid);
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        return ans;
}

int main(){
vector<int> v = {0,4,1,0};
cout<<findPeak(v)<<endl;
return 0;
}