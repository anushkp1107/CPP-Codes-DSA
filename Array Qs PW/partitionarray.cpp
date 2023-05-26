// Check if we can partition the array into two subarrays with
// equal sum. More formally, check that the prefix sum of a part
// of the array is equal to the suffix sum of rest of the array.

//MAIN GOAL IS TO FIND prefix sum = suffix sum
//Prefix sum + suffi sum =total sum


#include<iostream>
#include<vector>
using namespace std;

    bool CheckPrefixSuffixSum(vector <int> &v){
        int totalsum=0;
        for(int i=0;i<v.size(); i++){
            totalsum+=v[i];
        }

    int prefixsum = 0;
    for (int i=0;i<v.size(); i++){
    prefixsum+=v[i];
    int suffixsum = totalsum - prefixsum;

        if(prefixsum==suffixsum){
            return true;
        }
    }
        return false;
    }

    int main(){

        int n;
        cin>>n;

        vector<int> v;
        for(int i=0;i<n;i++){
            int ele; cin>>ele;
            v.push_back(ele);
        }

        cout<<CheckPrefixSuffixSum(v)<<endl;


    }