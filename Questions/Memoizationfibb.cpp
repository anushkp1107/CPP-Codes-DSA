#include<iostream>
using namespace std;
int F[10];
int fibb(int n)
{
    if(n<=1)
    {
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1)
        {
            F[n-2] = fibb(n-2);
        }
        if(F[n-1] == -1)
        {
            F[n-1] = fibb(n-1);
        }
        return F[n-2]+F[n-1];
    }
}
int main()
{
    int r = fibb(8);
    cout<<r;
    return 0;
}