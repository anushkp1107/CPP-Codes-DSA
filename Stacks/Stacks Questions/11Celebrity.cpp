// CELEBRITY PROBLEM ->  IMP Q

/*
celebrity row me all zeroes honge
celebrity wle column me sab 1 honge except the number wla row itself
celebrity kisi ko nhi janta
sab celebrity ko jante hai

******************************************************************************
algo :-

PUT ALL ELEMENTS INSIDE THE STACK

JAB TAK STACK KA SIZE != 1 KEEP POPPING ELEMENTS A-> s.top() -> s.pop() similarly B-> s.top() -> s.pop()

if A knows B -> matlab a is definately not a celeb so discard a and add b back to the stack and if b knows a -> so b is not a celeb so discard b and add a....keep doing this until only 1 element left in stack and then that maybe the answer.

to confirm the ans check the row of that element -> all row elements must be 0 (celebrity knows no one)
check col elements -> all 1 except the diagonal part .

*/

#include <bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>> &M, int a, int b, int n)
{
    if (M[a][b] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    // push all elements to stack
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (knows(M, a, b, n))
        {
            s.push(a);
        }
        else
        {
            s.push(b);
        }
    }

    int ans = s.top();

    // single element left in stack which is the potential celebrity
    // verify it

    bool rowCheck = false;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[ans][i] == 0) // M[row][col] --> I in col means check every col (which means 3 cols i.e a row) of the ans ele
        {
            zeroCount++;
        }
    }
    // all zroes

    if (zeroCount == n)
    {
        rowCheck = true;
    }

    // column check
    bool colCheck = false;
    int oneCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (M[i][ans] == 1) // M[row][col] --> I in row means check every row of the ans element
        {
            oneCount++;
        }
    }
    if (oneCount == n - 1)
    {
        colCheck = true;
    }

    if (rowCheck == true and colCheck == true)
    {
        return ans;
    }
    else
    {
        return -1;
    }
}
