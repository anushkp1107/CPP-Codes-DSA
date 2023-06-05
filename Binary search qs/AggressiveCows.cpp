// Given an array of length where each element denotes the position of a stall. Now you have
// 'N' stalls and an integer • K' which denotes the number Of cows that are aggressive. TO prevent
// the cows from hurting each other. you necld to assign the cows to the stalls. such that the
// minimum distance between any two Of them is as large as possible. Return the largest
// minimum distance.

/*
in this we need to find the largest possible dist so that the cows dont fight and we apply bs in this q

if we find a soln ... we need to go the right side as we found soln means cows wont fight...so right side means cows also wont fight and we can check for even higher values as asked the same in the qs

if no possible ans found then we check left part ..
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSoln(vector<int> &v, int k, int mid)
{
    int cowCount = 1;
    int lastPos = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = v[i];
        }
    }

    return false;
}

int AggCows(vector<int> &v, int k)
{
    sort(v.begin(), v.end());
    int lo = 0;

    int maxi = -1;
    for (int i = 0; i < v.size(); i++)
    {
        maxi = max(maxi, v[i]);
    }

    int hi = maxi;
    int ans = -1;
    int mid = lo + (hi - lo) / 2;

    while (lo <= hi)
    {
        if (isPossibleSoln(v, k, mid))
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    return ans;
}

int main()
{

    return 0;
}