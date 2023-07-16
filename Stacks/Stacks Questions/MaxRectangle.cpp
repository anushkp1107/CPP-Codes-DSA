// Given a binary matrix M of size n X m. Find the maximum area of a rectangle formed only of 1s in the given matrix.

/*
compute max area for first row
for every remaining row upar wli element ke row ko add kro current row ke saath
visualise like the histogram q.....longest histogram which we can make and then compute the area
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(int *arr, int n)
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

vector<int> prevSmallerElement(int *arr, int n)
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

int largestRectangle(int *heights, int n)
{
    // int n = heights.size();

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

int maxArea(int M[MAX][MAX], int n, int m)
{
    // compute area for first row
    int area = largestRectangle(M[0], m); // pehli row ka area nikala

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // row update by adding prev rows values
            if (M[i][j] != 0)
            {
                M[i][j] = M[i][j] + M[i - 1][j];
            }
            else
            {
                M[i][j] = 0;
            }
        }
        area = max(area, largestRectangle(M[i], m));
    }
    return area;
}