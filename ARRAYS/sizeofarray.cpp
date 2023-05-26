#include<iostream>
using namespace std;

int main(){

int array[] = {1,2,3,4,5,6};

cout<<sizeof(array)<<endl;
cout<<sizeof(array)/sizeof(array[0])<<endl; // TO FIND THE NUMBER  OF ELEMENTS OF AN ARRAY WE DIVIDED THE TOTAL  
                                            // LENGTH OF THE ARRAY WITH ONE ELEMENT OFF THE ARRAY

return 0;
}
