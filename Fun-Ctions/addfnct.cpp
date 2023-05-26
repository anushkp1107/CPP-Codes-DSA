#include<iostream>
using namespace std;

void addfnct();
int x;
int y;

int main(){

cout<<"first number brev : ";
cin>>x;
cout<<"second number brev : ";
cin>>y;

addfnct();

return 0;
}

void addfnct() {

    cout<<"The sum of yout numbers is : "<<(x + y)<<endl;

}