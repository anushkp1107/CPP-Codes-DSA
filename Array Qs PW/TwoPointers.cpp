// SORT AN ARRAY CONSISTING OF ONLY 0 AND 1
// ANS: sort 0 to left and 1 to the right

#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector <int> &v){
    
}

int main(){

int n;
cin>>n;

vector<int> v;

for(int i=0;i<n;i++){
    int ele; cin>>ele;
    v.push_back(ele);
}

sortZeroesAndOnes(v);

return 0;
}