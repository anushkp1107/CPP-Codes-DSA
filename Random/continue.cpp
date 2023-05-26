#include<iostream>;
using namespace std;

int main(){
int i;

for(int i = 0; i <40; i++){
    if(i==7){
        continue;             //* 7 IS SKIPPED IN THE OUTPUT
    }
    cout<<i<<endl;
}
return 0;
}