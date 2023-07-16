// Given valid mathematical expressions in the form of a string. You
// are supposed to return true if the given expression contains a pair
// of redundant brackets, else return false. The given string only
//  contains '(, ')', 's * , '/' and lowercase English letters.
// Note :
// A pair of brackets is said to be redundant when a subexpression
// is surrounded by needless/ useless brackets.
// faltu brackets = redundant ex] ((A+b)) -> first and last bracket redundant

/*
we can know redundant by checking if there is a +,- operator inn btwn ()... if there is a +,- that means that the bracket is not faltu and it is not redundant.

stack banao aur usme open brackets / alphabets / operators daalo until we get a closing bracket...once we found a closing bracket check the top() elements of the stack for operators ...if operators found then not redundant and if not found then redudant.
*/

#include <bits/stdc++.h>
using namespace std;

bool findRedudant(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' or ch == '+' or ch == '*' or ch == '-' or ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // ) mila ya lowercase letter
            if (ch == ')')
            {
                bool isRedudant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '(' or top == '+' or top == '*' or top == '-' or top == '/')
                    {
                        isRedudant = false;
                    }
                    st.pop(); // tab tk pop karo jab tk ( nhi mil jataa
                }
                if (isRedudant = true)
                {
                    return true;
                    st.pop();
                }
            }
        }
    }
    return false;
}
