#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch[6] = "abcde";

    cout << ch << endl;

    char *c = &ch[0];
    // prints entre array and not the address
    cout << c << endl;

    return 0;
}

