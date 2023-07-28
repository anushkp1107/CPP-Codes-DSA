#include <bits/stdc++.h>
using namespace std;

int main()
{

    deque<int> d; // doubly eneded queue

    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();

    if (d.empty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    return 0;
}