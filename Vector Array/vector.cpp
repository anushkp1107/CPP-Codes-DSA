#include<iostream>
#include <vector>
using namespace std;

int main(){

vector<int> name;

cout<<"size :"<<name.size()<<endl;
cout<<"capacity :"<<name.capacity()<<endl;

name.push_back(1);
cout<<"size :"<<name.size()<<endl;
cout<<"capacity :"<<name.capacity()<<endl; 


name.push_back(2);
cout<<"size" <<name.size()<<endl;
cout<<"capacity :"<<name.capacity()<<endl;


name.push_back(3);
cout<<"size :"<<name.size()<<endl;
cout<<"capacity :"<<name.capacity()<<endl;

name.resize(5);
cout<<"size "<<name.size( )<<endl;
cout<<"capacity :"<<name.capacity()<<endl;      // capacity should be 8 as it increses in the power of 2 when 


name.resize(10);
cout<<"size "<<name.size( )<<endl;
cout<<"capacity :"<<name.capacity()<<endl;

name.pop_back();
name.pop_back();          //removes last element

cout<<"size "<<name.size( )<<endl;
cout<<"capacity :"<<name.capacity()<<endl;





return 0;
}