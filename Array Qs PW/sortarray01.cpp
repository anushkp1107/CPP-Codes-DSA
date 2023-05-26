//* SORT AN ARRAY CONSISTING OF ONLY ZEROES AND ONES

// LOGIC --> IF WE FIND THE NUMBER OF 0 IN THE ARRAY WE CAN MAKE A NEW ARRAY WITH THE SAME NO. OF ZEROES IN THE 
// START AND THEN FILL THE REST IF THE SPACES WITH 1



#include<iostream>
#include<vector>
using namespace std;

void SortZeroesAndOnes(vector<int> &v) {

    int zeroescount = 0;

    for(int ele:v){           // FOR EACH LOOP    SYNTAX ----> FOR(DATATYPE VARIABLE NAME , CONATAINER)
        if(ele==0){
            zeroescount++;
        }
    }
    
for(int i=0;i<v.size();i++){
    if(i<zeroescount){                      // TO PRINT 0 TILL THE NUMBER OF TIMES WE GOT ZERO IN THE PREVIOUS FCN
        v[i]=0;
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

    SortZeroesAndOnes(v);               // FNCT CALL

    for(int i=0;i<n;i++){             // PRINT SORTED ELEMENTS AFTER FUNCTION CALL  
        cout<<v[i]<<" ";
    } cout<<endl;

return 0;
}