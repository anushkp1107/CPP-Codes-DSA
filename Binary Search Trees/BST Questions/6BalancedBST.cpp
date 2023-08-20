// You have been given a binary search tree of integers with 'N'
// nodes. Your task is to convert it into a balanced BST with the
// minimum height possible.
// A Balanced BST is defined as a BST, in which the height of two
// subtrees of every node differs no more than 1.

/*
we need to make a balanced BST so first we do inorder traversal (visualise as if printed th traversal in an array) as it is sorted....then find the mid point and make it root node...then print left part in left subtree and right part in right subtree.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(Node *root, vector<int> &in)
{
    // LNR formula

    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, in);    // L
    cout << root->data << endl; // N
    inorder(root->right, in);   // R
}

Node *inorderToBST(int s, int e, vector<int> inorderVal)
{
    // base
    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;

    Node *root = new Node(inorderVal[mid]);
    root->left = inorderToBST(s, mid - 1, inorderVal);
    root->right = inorderToBST(mid + 1, e, inorderVal);
    return root;
}

Node *BalancedBST(Node *root)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);

    return inorderToBST(0, inorderVal.size() - 1, inorderVal);
}