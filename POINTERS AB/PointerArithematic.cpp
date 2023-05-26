#include<iostream>
using namespace std;

int main(){

int A[5] = {2,4,6,8,10};
int *p = A;

cout<<*p<<endl;         //* HERE IT POINTS TO THE FIRST ELEMENT OF ARRAY A
p++;                    //* P++ TO MAKE POINTER POINT TO THE NEXT ELEMENT OF THE ARRAY
cout<<*p<<endl;  
p--;
cout<<*p<<endl;

cout<<p<<endl;
cout<<p+2<<endl;
cout<<*(p+2)<<endl;              //* POINRTER POINTS TO P+2 th  element of the array

// TO GET ALL ELEMENTS OF THE ARRAY-

for(int i=0;i<5;i++){
    cout<<A+i<<endl;                 //*    * GIVES DATA (ELEMENTS)
    cout<<*(A+i)<<endl;              //*    WITHOUT * IT WILL GIVE ADRESSES
    cout<<*(p+i)<<endl;
}

return 0;
}