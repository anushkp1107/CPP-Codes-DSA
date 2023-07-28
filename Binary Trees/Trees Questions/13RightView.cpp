#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void solve(Node *root, vector<int> &ans, int level)
{
    // base
    if (root == NULL)
    {
        return;
    }

    // we enetered a new level
    if (level == ans.size()) // first level me root  add hua ans me so ans ka size 1 then solve se level +1 kia to level == ans.size hogya so matlab new level so again element ko push kardo
    {
        ans.push_back(root->data); // new level ke pehle element ko store karlo
    }

    solve(root->right, ans, level + 1);
    solve(root->left, ans, level + 1); // yha change hua bas
}

vector<int> rightView(Node *root)
{
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
