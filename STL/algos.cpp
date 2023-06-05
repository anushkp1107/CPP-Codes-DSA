// to use bs first we need sorted array

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(8);
    v.push_back(4);
    v.push_back(7);

    // cout << binary_search(v.begin(), v.end(), 5) << endl; // find 5 with bs
    // cout << binary_search(v.begin(), v.end(), 6) << endl; // find 6 with bs

    // string abcd = "abcd";
    // reverse(abcd.begin(), abcd.end());
    // cout << abcd << endl;

    // int n;
    // cin >> n;

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
