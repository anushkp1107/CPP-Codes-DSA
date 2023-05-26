#include<iostream>
using namespace std;

int main() {
    int a = 45;
   float b = 45.46;

   cout<<"the sum  is "<<a + b<<endl;
   cout<<"the sum  is "<<a + (int)b<<endl;
   cout<<"the sum  is "<<a + int(b)<<endl;

   return 0;
}

