#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector <int> &v){
    int n = v.size();

    for(int i=0;i<n;i++){
        int currentele = v[i];

        // find correct position for the current element

        int j = i-1;
        while(j>=0 and v[j]>currentele){
            v[j+1] = v[j];            // move elements by 1 step ahead which are more than the current element
            j--;
        }
        // insert current element
        v[j+1] = currentele;
    }
    return;
}

int main(){

int n; cin>>n;

vector<int> v(n);

for(int i=0;i<n;i++){
    cin>>v[i];
}

insertionSort(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}cout<<endl;

return 0;
}

/*
TC == O(n2)
SC == O(1)
*/