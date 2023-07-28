// Given a Binary Tree. Return true if, for every node X other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false.

// An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.

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

pair<bool, int> isSumTreeFast(Node *root)
{

    // base case
    if (root == NULL)
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }
    // leaves wla case
    if (root->left == NULL and root->right == NULL)
    {
        pair<bool, int> p = make_pair(true, root->data);
        return p;
    }

    pair<bool, int> leftAns = isSumTreeFast(root->left);
    pair<bool, int> rightAns = isSumTreeFast(root->right);

    bool left = leftAns.first;
    bool right = rightAns.first;

    bool condn = root->data == leftAns.second + rightAns.second;

    pair<bool, int> ans;

    if (left and right and condn)
    {
        ans.first = true;
        ans.second = root->data + left.second + right.second;
    }

    else
    {
        ans.first = false;
    }
    return ans;
}

bool isSumTree(Node *root)
{
    // Your code here
    return isSumTreeFast(root).first;test
}
