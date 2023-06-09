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

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    { // keep iterating till we get the null value as whenever there is a string there is always a null value created at the end
        count++;
    }
    return count;
}

int main()
{
    char name[20];

    cout << "enter name" << endl;
    cin >> name;

    cout << "name is ";
    cout << name << endl;
    int len = getLength(name);

    cout << "length is  " << getLength(name) << endl;

    cout << "is palindrome? " << check(name, len) << endl;
    return 0;
    return 0;
}