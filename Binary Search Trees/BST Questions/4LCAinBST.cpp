// LOWEST COMMON ANCESTOR IN A BST

// You are given a binary search tree of integers with N nodes. You
// are also given references to two nodes 'Pand 'Q'from this BST.
// Your task is to find the lowest common ancestor(LCA) of these
// two given nodes.
// The lowest common ancestor for two nodes P and Q is defined as
// the lowest node that has both P and Q as descendants (where we
// allow a node to be a descendant of itself)

/*

    agar root->data dono a aur b se chota hai to right part me check karo

    agar root->data a aur b se bada hai to left part jana hai

    agar root > a and root < b or vice versa then root is the answer

*/

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

TreeNode<int> *LCAinaBST(TreeNode<int> *root, TreeNode<int> *P, TreeNode<int> *Q)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data > P->data and root->data > Q->data)
    {
        return LCAinaBST(root->left, P, Q);
    }

    if (root->data < P->data and root->data > Q->data)
    {
        return LCAinaBST(root->right, P, Q);
    }

    return root;
}

// ITERATIVE SOLN

TreeNode<int> *LCAinaBST(TreeNode<int> *root, TreeNode<int> *P, TreeNode<int> *Q)
{
    if (root == NULL)
    {
        return NULL;
    }

    while (root != NULL)
    {

        if (root->data > P->data and root->data > Q->data)
        {
            root = root->left;
        }
        else if (root->data < P->data and root->data > Q->data)
        {
            root = root->right;
        }
        else
        {
            return root;
        }
    }
}