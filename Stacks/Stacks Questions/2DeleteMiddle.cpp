// You are having a stack "ARR" of size 'N+l', your task is to delete
// the middlemost element so that the size of resulting stack is 'N'.

/*
    ek count rakho to keep track of where u are in the stack and when count== size/2 then pop that element from the stack.  
*/

#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &inputStack, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // recursive call
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void DeleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}
