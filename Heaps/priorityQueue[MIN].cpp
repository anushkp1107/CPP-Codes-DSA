//* MIN HEAP PRIORITY QUEUE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    minheap.push(13);

    cout << "element at top: " << minheap.top() << endl;
    // here as in a max heap the op element in the priority queue is 13

    // size
    cout << minheap.size() << endl;

    // pop
    // cout << pq.pop() << endl;

    if (minheap.empty())
    {
        cout << "minheap is empty";
    }
    else
    {
        "not empty";
    }

    return 0;
}