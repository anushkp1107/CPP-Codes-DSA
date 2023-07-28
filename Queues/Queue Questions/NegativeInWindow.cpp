// Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    deque<long long int> dq;
    vector<long long> ans;

    // process first window of k size
    for (int i = 0; i < K; i++)
    {
        if (A[i] < 0)
        {
            dq.push_back(i);
        }
    }

    // store answer of first k sized window fron dq which we pushed the ans into earlier
    if (dq.size() > 0)
    {
        ans.push_back(A[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }

    // process the remaining windows
    for (int i = K; i < N; i++)
    {
        // removal
        if (!dq.empty() and i - dq.front() >= K)
        {
            dq.pop_front();
        }
        // adiition
        if (A[i] < 0)
        {
            dq.push_back(i);
        }
        // ans store
        if (dq.size() > 0)
        {
            ans.push_back(A[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }
    return ans;
}
