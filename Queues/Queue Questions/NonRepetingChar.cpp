// Given an input stream A of n characters consisting only of lower case alphabets. While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point. If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.

/*
use a map<char,int> to store the coutnts of all the apphabets and how many times they appear
then we make a queue and add all stream to it and q.front to check if repeating or not and then do whatever acc to repeating or non repeating.
*/

#include <bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A)
{
    queue<int> q;
    string ans = "";
    unordered_map<char, int> count;

    for (int i = 0; i < A.length(); i++)
    {
        char ch = A[i];

        // increase count
        count[ch]++; // same ch mila to count ++

        // queue me push
        q.push(ch);

        while (!q.empty())
        {
            if (count[q.front() > 1])
            {
                // repeating char
                q.pop();
            }
            else
            {
                // non repeating
                ans.push_back(q.front());
                break; // ans mil gya to break karlo
            }
        }
        if (q.empty())     // koi ans nhi mila to acc to q # kardo
            ans.push_back('#');
    }
    return ans; 
}

int main()
{

    return 0;
}
