//*  Q] REVERSE THE DIGITS OF THE GIVEN NUMBER

//* EX]    1724

//*TO REVERSE THIS DIGITS FIRST WE NEED TO DIVIDE BY 10 I.E 1724 % 10....NOW THE REMAINDER OF THIS IS 4 AND HENCE WE 
//* GOT THE LAST DIGIT OF THE NUMBER...NOW 1724/10 WILL GIVE 172 AND THEN THE LOOP CONTINUES....172 % 10 GIVES 2 AND 
//* AND THEN 172/10 GIVES 17......17 % 10 GIVES 7 AND 17 / 10 GIVES 1 ....HENCE WE FOUND ALL THE NUMBERS 

//* see table screenshot in notes folder

#include<iostream>
using namespace std;

int main(){
int r;
int n;

cout<<"ENTER THE NUMBER BREV : ";
cin>>n;

while(n>0){               //* cant use if statement as it stops after 1 loop whereas while loop continues
    r = n % 10;           //* 1724 % 10 = 4
    n = n / 10;           //* 1724 / 10 = 172 and then again loop continues 
    cout<<r<<endl;
}

return 0;
}


