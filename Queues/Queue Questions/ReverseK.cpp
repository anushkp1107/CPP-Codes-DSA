// Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

/*
fetch first k elements from stack and put it into stack and then we get the reversed order and then just put the elements into the queue
*/

#include <bits/stdc++.h>
using namespace std;

queue<int> modify(queue<int> q, int k)
{
    // pop first k from q and put into stack
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int ele = q.front();
        q.pop();
        s.push(ele);
    }

    // fetch from stack and push into queue
    while (!s.empty())
    {
        int elem = s.top();
        s.pop();
        q.push(elem);
    }

    // fetch first n-k elements from Q and push back n->q.size as reversed elements ab peeche add ho gye hai so to get proper order staritng ke elements ko reversed elements ke peeche laana hoga

    // int t = q.size() - k;
    // while (t--)
    // {
    //     int val = q.front();
    //     q.pop();
    //     q.push(val);
    // }
    // return q;


    for (int i = 0; i < q.size() - k; i++)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
