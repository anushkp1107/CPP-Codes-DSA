
/* REPETEDLY FIND MINIMUM ELEMENT IN UNSORTED ARRAY AND PLACE IT AT THE BEGINNING UNTIL ARRAY IS SORTED */

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        // finding minimum element in unsorted array
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index]){
                min_index=j;    
            }
        }
         //placing minimum element at the beggining of unsorted array
         if(i!=min_index){
            swap(v[i],v[min_index]);
         }
    }
}

int main(){

int n; cin>>n;

vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}

selectionSort(v);

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}cout<<endl;

return 0;
}

/*
SC == 0(1)
TC == (n2)

used when array is small
*/