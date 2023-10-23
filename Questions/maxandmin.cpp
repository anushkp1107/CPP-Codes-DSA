#include<iostream>
#include<limits.h>
using namespace std;
 
bool findKey(int arr[][3], int rows, int cols, int key){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j] == key){
                return true;
            }
        }
        
    }
    //value is not found 
    return false;
}

void printRowSum(int arr[][3], int rows, int cols){
    // row sum -> row wise travesal
    cout<<"Printing row sum "<<endl;
    for(int i = 0; i<rows; i++)
    {
        int sum = 0;
        for (int j = 0; j<cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<< endl;
    }
}

int getMax(int arr[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for(int i = 0; i<rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            if(arr[i][j] > maxi)
              maxi = arr[i][j];
        }
    }
    return maxi;
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
             cin>>arr[i][j];
        }
        cout<<endl;
    }
    
    // printing array row wise
    cout<<"Printing all elements"<<endl; 
    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j<cols; j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    } 
    
    printRowSum(arr, rows, cols);
    
    // cout<<"Searching an element "<<endl;

    // int key = 8;
    // if(findKey(arr, 3, 3 , key)){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false" << endl;
    // }

    cout<< "Max Number "<<getMax(arr, rows, cols);
}