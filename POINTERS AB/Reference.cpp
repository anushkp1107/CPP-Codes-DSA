#include<iostream>
using namespace std;

int main(){

int x = 10;
int &y = x;

cout<<x<<endl;
y++;
x++;
cout<<x<<endl;
cout<<y<<endl;

//  WHENEVER COUT &()....IT MEANS ADRESS OF ()

cout<<&x<<" and "<<&y;

return 0;
}