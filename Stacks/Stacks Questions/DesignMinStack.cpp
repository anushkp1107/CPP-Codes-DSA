#include <bits/stdc++.h>
using namespace std;


/*
we use push = 2*curr-prevMin and pop = 2*mini - curr as we make a variable such that we can find the prev mini with the curr mini.
*/


class SpecialStack
{
public:
    stack<int> s;
    int mini;

    void push(int data)
    {
        // for first element
        if (s.empty())
        {
            s.push(data);
            mini = data;
        }
        else
        {
            if (data < mini)
            {
                // nya mini mila
                s.push(2 * data - mini);
                mini = data;
            }
            else
            {
                s.push(data);
            }
        }
    }

    int pop()
    {
        if (s.empty())
        {
            return -1;
        }
        int curr = s.top();
        s.pop();

        if (curr > mini)
        {
            return curr;
        }
        else
        {
            int prevMin = mini;
            int val = 2 * mini - curr;
            mini = val;
            return prevMin;
        }
    }

    int top()
    {
        if (s.empty())
        {
            return -1;

            int curr = s.top();
            if (curr < mini)
            {
                return mini;
            }
            else
            {
                return curr;
            }
        }
    }

    bool isEmpty()
    {
        return s.empty();
    }

    int getMin()
    {
        if (s.empty())
            return -1;

        return mini;
    }
};

int main()
{

    return 0;
}