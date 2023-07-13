/*
find if palindrome using recursion

[can use 2 pointer]
*/

#include <bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string &str, int i, int j)
{
    // base case
    if (i > j)
        return true;

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return CheckPalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    string name = "NOON";
    bool isPlaindrome = CheckPalindrome(name, 0, name.length() - 1);

    if (isPlaindrome)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}