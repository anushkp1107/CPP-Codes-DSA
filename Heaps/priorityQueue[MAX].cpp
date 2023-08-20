// Priority queue is a max heap by default

//* MAX HEAP PRIORITY QUEUE

#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    pq.push(13);

    cout << "element at top: " << pq.top() << endl;
    // here as in a max heap the op element in the priority queue is 13

    // size
    cout << pq.size() << endl;

    // pop
    // cout << pq.pop() << endl;

    if (pq.empty())
    {
        cout << "pq is empty";
    }
    else
    {
        "not empty";
    }

    return 0;
}

