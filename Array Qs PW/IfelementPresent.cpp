// Given Q queries, check if the given number is present in the
// array or not.
// Value of all the elements in the array is less than IO to
// the power of 5.



#include<iostream>
#include <vector>
using namespace std;

int main(){

int n; cin>>n;

vector<int> v(n);     // intialised a vector of size n with name v
for(int i=0;i<n;i++){       // taking inputs from the user
    cin>>v[i];
}

const int N = 1e5 + 10;            // N is 10 to the power 5
vector<int> freq(N,0);             // vector with size 10 to the power 5 and elements as 0 and name is freq
for(int i=0;i<n;i++){   
    freq[v[i]]++;
}

cout<<"Enter queries";
int q; cin>>q;

while(q--){
    int queryele; cin>>queryele;
    cout<<freq[queryele]<<endl;
}

return 0;
}


