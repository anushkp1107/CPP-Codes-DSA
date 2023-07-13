#include <bits/stdc++.h>
using namespace std;

class Stack
{
    // peroperties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            // space available
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack unerflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false; 
        }
    }
};

int main()
{

    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(3);

    s.pop();

    cout << "top element is :" << s.top() << endl;

    if (s.empty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is not empty" << endl;
    }

    cout << "size of stack is: " << s.size() << endl;

    return 0;
}