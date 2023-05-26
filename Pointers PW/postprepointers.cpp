/* post and pre arithematic pointers*/


#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[2] = {1,19};
int *ptr = &arr[0];
cout<<ptr<<"   "<<*ptr<<endl;
cout<<(ptr+1)<<"   "<<*(ptr+1)<<endl;

cout<<ptr++;     /* in this start from right to left i.e first ptr ++ and then * i.e initially ptr was pointing to 
arr[0] i.e 1....now ptr++ means it is poining to the adddress of 19 and then after that it goes back to 1 */
cout<<arr[0]<<" "<<arr[1]<<endl;
cout<<ptr<<" "<<*ptr<<endl;

return 0;
}