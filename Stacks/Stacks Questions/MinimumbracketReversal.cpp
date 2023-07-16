// Minimum bracket Reversal

// Ninja has been given a string 'STR' containing either '{' or '}'. 'STR'
// is called valid if all the brackets are balanced. Formally for each
// opening bracket, there must be a closing bracket right to it.

/*
condns:
no of open = no. of close
every close brace should have open brace before it

logic:
str length will alwys be even as no of open = no. of close

*/

#include <bits/stdc++.h>
using namespace std;

int findMinimum(string str)
{
    // odd condition
    if (str.length() % 2 == 1)
    {
        return -1;
    }
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '(')
        {
            s.push(ch);
        }
        else
        {
            // ch is closed brace
            if (!s.empty() and s.top() == '(')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
}

int main()
{

    return 0;
}