#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.length() != t.length())
        {
            return false;
        }
        sort(s.begin(), s.end()); //* sorts string
        sort(t.begin(), t.end());

        return s == t; //* return true if s==t [nice shortcut]
    }
};

int main()
{

    return 0;
}