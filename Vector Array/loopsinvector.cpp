#include <iostream>
#include <vector>
using namespace std;

int main(){

vector<int> v;

//for loop
for(int i=0;i<5;i++){
    int element;                                            
    cin>>element;
    v.push_back(element);
}

for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}

cout<<endl;

return 0;
}



//FOR EACH LOOP

for(int ele:v){
    cout<<ele<<" ";
}

cout<<endl;

// WHILE LOOP

int d=0;
while(d<v.size()){
    cout<<v[d++]<<" ";
}

cout<<endl;