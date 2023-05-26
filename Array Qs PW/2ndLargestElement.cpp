// FIND SECOND LARGEST ELEMENT IN THE GIVEN ARRAY

#include<iostream>
#include<vector>
using namespace std;


//* TO FIND THE LARGEST ELEMENT IN THE ARRAY TO MAKE IT -1 
    

int largestElementIndex(int array[], int size){
    int max = INT_MIN;
    int maxindex=-1;              // CAN BE 0,1 ETC

    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main(){

int array[]={2,3,5,7,6,1};
int indexoflargest = largestElementIndex(array,6);

array[indexoflargest] = -1;
int indexofsecondlargest = largestElementIndex(array,6);
cout<<array[indexofsecondlargest]<<endl;

return 0;
}