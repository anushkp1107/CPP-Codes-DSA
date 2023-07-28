// V V IMP

// Suppose there is a circle. There are N petrol pumps on that circle. You will be given two sets of data.
// 1. The amount of petrol that every petrol pump has.
// 2. Distance from that petrol pump to the next petrol pump.
// Find a starting point where the truck can start to get through the complete circle without exhausting its petrol in between.
// Note :  Assume for 1 litre petrol, the truck can go 1 unit of distance.

/*
2 pointer rakho front aur rear at 0....if start block se next block tk ka travel possible hai (petrol - distance > 0) to  rear++ kardo else front =rear+1 [here rear+1 kar rhe and not front ++ as if we start from block 1 and cannot go ahead after block 3 then even if we strat from block 2 we cant go beyond block 3...as each block gives some balance petrol after traversal so if less the number of block i.e we strat from block 2 then no way we can go past 3 will less balance petrol than if we started from 1 so front = rear+1 ]and strat from front and rear is also made = front.....breaking condn is if rear==front as it means we made a full circle without exhausting fuel.
*/

#include <bits/stdc++.h>
using namespace std;

// The structure of petrolPump is
struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump p[], int n)
{
    int deficit = 0; // kami of petrol
    int balance = 0;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        balance = p[i].petrol - p[i].distance;
        if (balance < 0)
        {
            deficit += balance; // itni ki kami pad rhi hai
            start = i + 1;      // start ko i ke aage se shuru kardo as i pe -1 ka deficit aa gya
            balance = 0;        // nyi jagah se start kar rhe to balance ko 0 kro
        }
    }

    if (deficit + balance >= 0)
    { // loop ho gya so ans
        return start;
    }
    else
    {
        return -1;
    }
}
