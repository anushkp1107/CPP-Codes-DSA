// FIND THE KTH SMALLEST ELEMENT IN BST

// Given a binary search tree and an integer Your task is to find the 'K-th' smallest element in the given BST( binary search tree). If all the smallest nodes on the left side and all the greater nodes on the right side of the node current node.

/*
INORDER TRAVERSE KARO TREE KO (LNR) aur ek counter rakh lo.....jab N aayega traverse karne pe to i++ kar dena aur jab i == K ho jayega to us node ko print kar dena
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

int solve(Node *root, int &i, int k)
{
    // base
    if (root == NULL)
    {
        return -1;
    }
    // L of LNR
    int left = solve(root->left, i, k);

    if (left != -1)
    {
        return left; // -1 nhi aaya matlab yehi ans hai
    }
    // N of LNR
    i++;
    if (i == k)
    {
        return root->data;
    }

    // R
    return solve(root->right, i, k);
}

int kSmallest(Node *root, int k)
{
    int ans = solve(root, i, k);
    return ans;
}

