// You're given a string 'S'consisting of '{' , '}' , '(' , ')' and [ ]. return true if the sting s is balanced

// V V IMP

/*
we put all the opening expressions in he stack while traversing...now if we get a opening bracket we push it into the stack and when we get a closing bracket we check the opning bracket for the same in the stack and if we fing it we pop it...if the stack is empty at last then it is a valid parenthesis.
*/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string expression)
{

    stack<char> s;

    for (int i = 0; i < expression.length(); i++)
    {
        char ch = expression[i];
        // if opening bracket, stack pushh
        if (ch == '(' or ch == '[' or ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // closing bracket so stack top check and pop
            if (!s.empty())
            {
                char top = s.top();
                if ((ch == ')' and top == '(') or (ch == ']' and top == '[') or (ch == '}' and top == '{'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                // unbalanced expression
                return false;
            }
        }
    }

    if (s.empty())
    {
        return true; // all matching brackets are popped and stack is empty
    }
    else
    {
        return false;
    }
}

