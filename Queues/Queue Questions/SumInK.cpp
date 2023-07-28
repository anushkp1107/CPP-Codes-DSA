// Given an array of both positive and negative integers, the task is to compute sum of minimum and maximum elements of all sub-array of size k.

//watch again queue qs vdo CH last q

#include <bits/stdc++.h>
using namespace std;

int solve(int *arr, int n, int k)
{
    deque<int> maxi(k);
    deque<int> mini(k);

    // addition of first k size window
    for (int i = 0; i < k; i++)
    {

        while (!maxi.empty() and arr[maxi.back()] <= arr[i])
        {
            maxi.pop_back();
        }

        while (!mini.empty() and arr[mini.back()] >= arr[i])
        {
            mini.pop_back();
        }
        maxi.push_back(i);
        maxi.push_back(i);
    }


}

int main()
{

    return 0;
}