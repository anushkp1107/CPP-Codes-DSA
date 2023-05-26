// Given an integers array 'a', return the prefix sum/
// running sum in the same array without creating a
// new array.



#include<iostream>
#include<vector>
using namespace std;


void RunningSum(vector<int> &vec1){
    for(int i=1;i<vec1.size();i++){
        vec1[i]= vec1[i-1] + vec1[i];  
    }
    
    return;

}


int main(){

    int n;
    cin>>n;

    vector<int> vec1;
    for(int i=0; i<n;i++){
        int ele; cin>>ele;
        vec1.push_back(ele);
    }

    RunningSum(vec1);

    for(int i=0;i<n;i++){
        cout<<vec1[i]<<" ";  
        cout<<endl;
    }


return 0;
}