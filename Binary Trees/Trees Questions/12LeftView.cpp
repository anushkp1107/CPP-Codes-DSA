// Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.

/*
    to print the left side view we just need to print the first node of each level of the tree
    https://www.youtube.com/watch?v=KV4mRzTjlAk
*/

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

    solve(root->left, ans, level + 1); // only left funtion call hoga jab tk null nhi hota...again null condn aaya to right wla solve funct call hoga
    solve(root->right, ans, level + 1);
}

vector<int> leftView(Node *root)
{
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
