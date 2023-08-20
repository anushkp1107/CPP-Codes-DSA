// Minimum Cost of ropes

// There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost. Given N size array arr[] contains the lengths of the ropes.

/*
    in this we take the 2 min elements from the array and add them

    while size > 1-> take the min elements from the array and add them

    to get the min element we can use min heap to get the elements in O(1) TC
*/

#include <bits/stdc++.h>
using namespace std;

long long minCost(long long arr[], long long n)
{
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    long long cost = 0;

    while (pq.size() > 1)
    {
        long long a = pq.top();
        pq.pop();

        long long b = pq.top();
        pq.pop();

        long long sum = a + b;
        cost += sum;
        pq.push(sum);
    }
    return cost;
}

int main()
{

    return 0;
}