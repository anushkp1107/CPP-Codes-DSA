// Find the square root of the given non negative value x. Round it off to the nearest floor integer value.

// pw skills

/*
    here we need to find just the interger value (ex: root 11 --> so ans is 3)
    here for root x we need to find a number betweeen 1 to x [search space is 1 to the giben number] where x*x <=40 and the highest number that satisfies the condn in the range is the answer.
*/

/*
now we apply bs on the search space [i to the given number of which we need to find the root] . we find the mid and if mid*mid is > the number then search left [aslo store thr ans as it can be a possible ans] else search right
*/

#include <iostream>
using namespace std;

int sqrt(int x)
{
    int lo = 1;
    int hi = x;
    int ans = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (mid * mid <= x)
        {
            ans = mid; // we got a value which meets the condns so we store it in ans but also search for a better ans as if we get good otherwise return this ans
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
    cout << sqrt(40);
    return 0;
}