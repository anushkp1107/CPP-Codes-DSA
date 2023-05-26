// Given an array of integers of size n. Answer q queries where
// you need to print the sum of values in a given range of indices
// from I to r (both included).

// Note: The values of I and r in queries follow I-based indexing.

//  Q IS TO FIND THE SUM OF THE ELEMENTS IN A GIVEN RANGE OF THE ARRAY



#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n+1,0);         // AS IT IS 1 BASED INDEXING SO N+1 SO THAT THE VALUES ARE ASSIGNED FROM THE 1 th position 
                                // of 0 based indexed array
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    //calculate prefix sum array

    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cin>>q;

    while(q--){
        int l,r;
        cin>>l>>r;

        int ans=0;
        // ans = prefixsummarray[r] - prefixsumarray[l-1]
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }

return 0;
}