#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue()
    {
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) // push into queue
    {
        if (rear == size)
            cout << "queue is full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() // pop fnc of queue
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear) // queue is exhausted
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};
