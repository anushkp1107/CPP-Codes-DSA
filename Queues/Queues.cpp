#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;

    q.push(11);
    q.push(17);
    q.push(15);

    cout << "size is" << q.size() << endl;

    cout << "front element is" << q.front() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "size is" << q.size() << endl;

    if (q.empty())
    {
        cout << "empty queue" << endl;
    }
    else
    {
        cout << "nope" << endl;
    }
    return 0;
}