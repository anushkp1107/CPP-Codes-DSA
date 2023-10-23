#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == key)
            return true;
    }

    return false;
}
int main()
{
    int arr[5] = {1,3,5,7,9};
    int n = 5;
    cout<<"Enter the key "<<" ";
    int key;
    cin>>key;

    if(linearSearch(arr, n, key))
    {
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}