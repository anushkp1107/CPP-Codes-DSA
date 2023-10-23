// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {0,1,1,1,1,1,0,0,1,0,0,0,};
//     int size = 12;

//     int numZero = 0;
//     int numOne = 0;

//     for(int i = 0; i<size; i++){
//         if(arr[i] == 0){
//             numZero++;
//         }
//         if (arr[i] == 1)
//         {
//             numOne++;
//         }
//     }
//         cout<<"Number of Zeroes " << numZero << endl;
//         cout<<"Number of Ones "<< numOne << endl;
//     return 0;
// }

// 
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[7] = {10,20,30,40,50,60,70};
//     int size = 7;

//     int start = 0;
//     int end = size-1;

//     // break condition
//     while(true){
//         if(start>end)
//            break;
           
//            if(arr[start] == arr[end])
//            {
//               cout<<arr[start]<<" "; /*Or arr[end] can be used */
//            }
//            else{
//            cout<<arr[start]<<" ";
//            cout<<arr[end]<<" ";
//            }

//            start++;
//            end--;
//     }
// }

#include<iostream>
using namespace std;

int main()
{
    int arr[7] = {10,20,30,40,50,60,70};
    int size = 7;

    int start = 0;
    int end = size-1;

    while(start<=end){
        // swap
        swap(arr[start],arr[end]);
        // incre + decre
        start++;
        end--;
    }

    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}