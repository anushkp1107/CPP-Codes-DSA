// sabse bada rectangle banao horizontally (bada is largest value of l*b)

/*
we can extend the rectangle if the next element of the curr is larger than the current element
to find the width we can use next-prev-1 ---> next is thr bar next to the rectangle wla bar and prev is the bar after which the rectangle starts
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);

    for (int i = n - 1; i >= 0; i--)
    {
        while (st.top() != -1 and arr[i] <= arr[st.top()])
        {
            st.pop();
        }
        int temp = arr[i];
        arr[i] = st.top();
        st.push(i);
    }

    return arr;
}

vector<int> prevSmallerElement(vector<int> arr, int n)
{
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < n; i++)
    {
        while (st.top() != -1 and arr[i] <= arr[st.top()])
        {
            st.pop();
        }
        int temp = arr[i];
        arr[i] = st.top();
        st.push(i);
    }

    return arr;
}

int largestRectangle(vector<int> &heights)
{
    int n = heights.size();

    vector<int> next(n);
    next = nextSmallerElement(heights, n);

    vector<int> prev(n);
    prev = prevSmallerElement(heights, n);

    int area = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int l = heights[i];
        int b = next[i] - prev[i] - 1; // width

        if (next[i] == -1)
        {
            next[i] = n;
        }
        int newArea = l * b;
        area = max(area, newArea);
    }
}
