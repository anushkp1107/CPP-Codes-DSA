// Reverse stack using recursion

/*
stack ke top wle element ko side me rakh lo
recursion use karke remaining stack ko reverse kro
wapas aate hue bottom me insert kro jo element ko side me rakhe the
*/

#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element)
{
    // base
    if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base
    if (stack.empty())
        return;

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    insertAtBottom(stack,num);
}

