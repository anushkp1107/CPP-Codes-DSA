/*
N O O N is palindrome

use two pointer to check the last and the first letters ans if all same then the word is a palindrome
*/

#include <bits/stdc++.h>
using namespace std;

    bool check(char v[], int n)
    {
        int s = 0;
        int e = n - 1;

        while (s <= e)
        {
            if (v[s] == v[e])
            {
                s++;
                e--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }

int main()
{
    char name[20];

    cout << "enter name" << endl;
    cin >> name;

    cout << "name is ";
    cout << name << endl;

    cout << "is palindrome? " << check(name, len) << endl;
    return 0;
}