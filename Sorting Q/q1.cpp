// Given an integer array arr, move all O's to the end of it while
// maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the
// array.

#include <bits/stdc++.h>
using namespace std;

void sortZeroes(vector <int> &v){

    int n = v.size();

    for(int i=n-1;i>=0;i--){    // a pointer which starts from the back and goes backwards to check for last non zero element
            // WHEN J BECOMES EQUAL TO I THEN I-- AND J AGAIN GOES TO TRAVERSE THE LOOP
            // here i is ued to check for last non zero element so we dont need to traverse the zeroes 
            // after the last non zero element as after last nz element all will be 0 only
            int j=0;
            bool flag = false;

            while(j!=i){
                if(v[j] == 0 and v[j+1]!=0){
                    swap(v[j], v[j+1]);
                    flag = true;
                }
                        j++;
            }
                 if(!flag){
                   break;
        }
    }
    return;

}

int main(){

int n; cin>>n;

vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

sortZeroes(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}cout<<endl;

return 0;
}