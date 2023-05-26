/* IN THIS THE LARGEST ELEMENT GETS INTO ITS CORRECT POSITION FIRST*/
/* REPETEDLY SWAP TWO ADJACENT ELEMENTS TILL THEY ARE IN RIGHT ORDER*/

#include <bits/stdc++.h>
using namespace std;

int main(){

for(int i=0;i<n-1;i++){
    bool swapped = false;    // to check if sorting has occured or not. if not occured then break to optimise code
    for(int j=i+1;j<n-1;j++){
        swap(arr[j] > arr[j+1]);
         swapped = true;        
    }
}

if (swapped == false)
    break;

return 0;
}

/*
TC == O(n2)
SC == O(1)
*/