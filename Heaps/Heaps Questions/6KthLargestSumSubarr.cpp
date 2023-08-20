// Kth largest Sum subarray

// 2 loops approach

/*
Given an array of integers, find the Kth largest sum subarray For
example, given the array [1, -2, 3, -4, 51 and K = 2, the 2nd largest
sum subarray would be [3, -4, 5], which has a sum of 4.
Please note that a subarray is the sequence of consecutive
elements of the array.
*/


#include <bits/stdc++.h>
using namespace std;

int KthLargest(vector<int> &arr, int k)
{
    vector<int> sumStore;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = arr[j];
            sumStore.push_back(sum);
        }
    }

    sort(sumStore.begin(), sumStore.end());

    return sumStore[sumStore.size() - k];
}

// approach 2

// https://youtu.be/eccAKrmffh8?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&t=595

