// sort on thr basis of ones tens and hundreds digits

#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &v, int pos){
    int n = v.size();
    //create freq array
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10];
    }

    //calculate cumilative frequcny
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }

    //ans array

    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        ans[freq[(v[i]/pos)%10]] = v[i]; 
    }
    
    //copy the ans array to original array
    for(int i=0;i<n;i++){
        v[i] = ans[i];
    }

}

void RadixSort(vector<int> &v){
    int max_ele = INT_MIN;
    for(auto x:v){   // for every element x in vector v
    max_ele = max(x,max_ele);
    }

    for(int pos=1; max_ele/pos > 0; pos *=10){   // loop over ones tens hundreds...
        countSort(v,pos);
    }
}

int main(){

int n;
cin>>n;

vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}

RadixSort(a);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}cout<<endl;

return 0;
}   


// SC ---> O(n)