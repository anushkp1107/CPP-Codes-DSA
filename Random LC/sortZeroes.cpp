#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0;

    for (int j = 0; j < nums.size(); j++)
    { // agar first number in the array is != zero then j ko apne aap se swap kardo and then j++ happens bcoz of the loop
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}
