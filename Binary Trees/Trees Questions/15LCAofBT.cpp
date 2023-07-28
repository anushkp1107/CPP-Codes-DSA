// Lowest Common Ancestor in a Binary Tree

// Given a Binary Tree with all unique values and two nodes value, n1 and n2. The task is to find the lowest common ancestor of the given two nodes. We may assume that either both n1 and n2 are present in the tree or none of them are present.

// ancestoe matlab uspar jaane pe jo node milta ho aur LCA matlab common node for both n1 and n2

/*
recursion se left aur right me traverse karo and if n1 or n2 mile to return karo calue otherwise return null karo...jis node pe dono !null aa jaye wo LCA hai
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

Node *lca(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 or root->data == n2)
    {
        return root;
    }

    Node *rightAns = lca(root->right, n1, n2);
    Node *leftAns = lca(root->left, n1, n2);

    if (leftAns != NULL and rightAns != NULL)
    {
        return root;
    }

    else if (leftAns == NULL and rightAns != NULL)
    {
        return leftAns;
    }
    else if (leftAns != NULL and rightAns == NULL)
    {
        return rightAns;
    }
    else
    {
        return NULL;
    }
}
