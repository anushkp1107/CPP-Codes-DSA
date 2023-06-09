#include <bits/stdc++.h>
using namespace std;

int main()
{

    char name[20];

    cout << "enter yo name : " << endl;
    cin >> name;

    name[2] = '\0'; //    \0 is null value     // print code to see output

    cout << "your name is ";
    cout << name << endl;
    return 0;
}