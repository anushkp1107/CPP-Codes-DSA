// Given a Queue Q containing N elements. The task is to reverse the
// Queue. Your task is to complete the function rev(), that reverses
// the N elements of the queue.

/*
stack se easily reverse ho jayega.....queue se 1 by 1 element nikalo and stack me daalo
stack se 1 ek karke element nikalenge to reverse hoke aayega aur fit use queue me daal denge
*/

#include <bits/stdc++.h>
using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> s;

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while (!s.empty())
    {
        int ele = s.top();
        s.pop();
        q.push(ele);
    }
    return q;
}

