
// A pangram is a sentence where every letter of the English alphabet appears at least once.

// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        int n = sentence.length();
        set<char> ch;
        for (int i = 0; i < n; i++)
        {
            ch.insert(sentence[i]);
        }
        int count = 0;
        for (int i = 0; i < ch.size(); i++)
        {
            count++;
        }
        if (count == 26)
        {
            return true;
        }
        return false;
    }
};
