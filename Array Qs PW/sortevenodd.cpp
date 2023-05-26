// Given an array of integers 'a', move all the even integers at the
// beginning of the array followed by all the odd integers. The
// relative order of odd or even integers does not matter. Return
// any array that satisfies the condition.

#include<iostream>
#include<vector>
using namespace std;



void sortByParity(vector<int> &v){
    
        int left_ptr=0;
        int rgt_ptr=v.size()-1;            // LAST ELEMENT

        while (left_ptr<rgt_ptr)
        {
            if(v[left_ptr]%2==0 && v[rgt_ptr]%2==0){
                swap(v[left_ptr],v[rgt_ptr]);
                left_ptr++; rgt_ptr--;
            }

            if(v[left_ptr]%2==0){
                left_ptr++;
            }
            
            if(v[rgt_ptr]%2==0){
                rgt_ptr--;
        }
    }
}


int main(){

int n; cin>>n;

vector<int> v;

for(int i=0;i<n;i++){
    int ele; cin>>ele;
    v.push_back(ele);
}

sortByParity(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}

return 0;
}