#include <bits/stdc++.h>
using namespace std;

void Update1(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}

int main()
{
    int n = 5;
    // pass by value    memory is different and hence the value does not change
    cout << "before : " << n << endl;
    Update1(n);
    cout << "after :" << n << endl;

    // pass by refrence    (value changes)  memory remains the same and hence the value changes
    cout << "before :" << n << endl;
    update2(n);
    cout << "After :" << n << endl;
    return 0;
}
