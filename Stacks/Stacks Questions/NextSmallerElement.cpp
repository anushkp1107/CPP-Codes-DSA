// You are given an array 'ARR' of integers of length N. Your task is
// to find the next smaller element for each of the array elements.
// Next Smaller Element for an array element is the first element to
// the right of that element which has a value strictly smaller than
// that element.
// If for any array element the next smaller element does not exist,
// you should print -1 for that array element.

/*
stack banao aur array ke right side se elemets ko traverse karo.....add a -1 to stack to retuen that as there no element to the right of the last element...now check the top element to find smaller element and if found store it and push it to the stack
*/

#include <bits/stdc++.h>
using namespace std;

// vector<int> nextSmallerElement(vector<int> &arr, int n)
// {
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);

//     for (int i = n - 1; i >= 0; i--)
//     {
//         int curr = arr[i];
//         while (s.top() >= curr)
//         {
//             s.pop();
//         }
        // loop ke bahar matlab ans is stack ka top
//         ans[i] = s.top();
//         s.push(curr);
//     }
//     return ans;
// }

#include <stack>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    st.push(-1);

    for (int i = n - 1; i >= 0; i--)
    {
        while (arr[i] <= st.top())
        {
            st.pop();
        }
        int temp = arr[i];
        arr[i] = st.top();
        st.push(temp);
    }

    return arr;
}
