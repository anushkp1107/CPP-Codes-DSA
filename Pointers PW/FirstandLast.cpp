#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void firstAndLastElement(string s, char x, int *first, int *last){
    for(int i=0;i<s.size();i++){              //  to search for the occurence of the element from the front
        if(s[i]==x){
            *first = i;
            break;
        }
    }

    for(int i=s.size()-1; i>=0;i--){             // to travrse the string from the last and find the last occurence
        if(s[i]==x){
            *last = i;
            break;
        }
    }
}

int main(){

string s = "aaabac";
char x = 'a';
int first = -1;        /* -1 is just to initialise them and has no significance */
int last = -1;

int *pf = &first;             /* stored the adress of the first and last in 2 new pointer variables*/
int *pl = &last;

firstAndLastElement(s, x, pf, pl);
cout<<*pf<<" "<<*pl<<endl;                /* called them by derefrence so the value stored inside them is called*/
cout<<first<<" "<<last<<endl;

return 0;
}