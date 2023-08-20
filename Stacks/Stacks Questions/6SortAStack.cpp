// Sort a Stack

/*
stack ke top element ko nikal do and recursive call kardo for sort and then add the top element in sorted manner with the sort insert function.
*/

#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &stack, int num)
{
    if (stack.empty() or (!stack.empty() and stack.top() < num))
    {
        stack.push(num);
        return;
    }

    int n = stack.top();    
    stack.pop();

    sortedInsert(stack, num);

    stack.push(n);
}

void sortStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call

    sortStack(stack);

    sortedInsert(stack, num);
}
