// REVERSE A STRING USING STACK

/*
 AS STACK IS LIFO SO IF WE PUT THE STRING IN THE STACK AND THEN POP ALL THE ELEMTNTS WE WOULD GET THEM REVERSED AUTOMATICALLY DUE TO STACKS PROPERTY OF LIFO
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "ROMIT";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while (!s.empty()) // while stack is not empty
    {
        char rv = s.top(); // stack ka 1st character lia
        ans.push_back(rv); // usko ans me daal dia

        s.pop(); // stack se hata dia
    }
    cout << "ans is " << ans << endl;
    return 0;
}