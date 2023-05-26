#include<iostream>
using namespace std;

int c = 45;

int main(){
    int a,b,c;

    cout<< "enter the value of a :"<<endl;    // ENDL IS \n i.e new line
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;
    c = a + b;
    cout<< " THE SUM OF A AND B IS:"<<c<<endl;
    cout<< " the value of c was : " <<::c;   /*  "::" is scope resolution operator.....retunns value 
                                               outside of int main i.e global value*/
    return 0;
}