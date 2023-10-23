#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v{1,2,4,5,66,42,45,23,4};
    int arr[] = {1,2,4,5,6,9,57};
    int size = 7; 

    if(binary_search (v.begin(), v.end(), 32)){
        cout<<"found" << endl;
    }
    else {
        cout<<"not found"<<endl;
    }

    return 0;
}