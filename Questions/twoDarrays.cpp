#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];

    // initialization
    int brr[3][3] = {
    {1,2,3}, 
    {4,5,6}, 
    {7,8,9}};

    // row wise print
    // outer loop
    for (int i = 0; i < 3; i++)
    {
        // for every element we need to print value in each column
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    /* 
    // column wise
    cout<<"Printing column wise"<<endl;

    // col print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< brr[j][i] << " ";
        }
        cout<<endl;
    }
    */

}