// Minimum bracket Reversal

// Ninja has been given a string 'STR' containing either '{' or '}'. 'STR'
// is called valid if all the brackets are balanced. Formally for each
// opening bracket, there must be a closing bracket right to it.
// Ninja wants to make 'STR' valid by performing some operations on it. In one operation. he can
// convert "{" into "}" or vice versa. and the cost of one such operation is 1.
// Your task is to help Ninja determine the minimum cost to make 'STR' valid.

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
            if (!s.empty() and s.top() == '(') // open brace mil gya for the closed brace
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
        // stack contains invalid expressions
        int a = 0, b = 0;
        while (!s.empty())
        {
            if (s.top() == '()')
            {
                b++; // open brace count
            }
            else
            {
                a++; // close brace count
            }

            s.pop();
        }

        int ans = (a + 1) / 2 + (b + 1) / 2;
        return ans;
    }
}
