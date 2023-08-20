// Given a binary tree. The task is to check whether the given tree follows the max heap property or not.
// Note: Properties of a tree to be a max heap - Completeness and Value of node greater than or equal to its child.

/*
    WE NEED TO CHECK IF THE GIVEN BT IS A CBT AND SATISFIES THE MAX HEAP PROPERTY -> Parent ndoe is always greater than the child nodes


    algo->

    to check for CBT if node i pe hai then left child will be (2*i)+1 and right child will be (2*i)+2 [1 based indexing]...agar left/right nodeCount se bahar chala gya to not CBT

    to check for maxOrder ->
    3 condns -> both child exist / leaf node / only left exist

    for leaf node -> as leaf node itself is a heap so return true

    for only left node -> if(right == NULL ) -> root->data should be > root->left [heap prop that parent is > than child nodes]

    both child case -> root->data > root->left->data and root->data > root->right->data and function call for the left and tight nodes to check for them being heap as well
*/

#include <bits/stdc++.h>
using namespace std;

// Structure of node
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int countNodes(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int ans = 1 + countNodes(root->left) + countNodes(root->right);
    return ans;
}

bool isCBT(struct Node *root, int index, int cnt)
{
    if (root == NULL)
    {
        return true;
    }

    if (index >= cnt)
    {
        return false;
    }
    else
    {
        bool left = isCBT(root->left, 2 * index + 1, cnt);
        bool right = isCBT(root->right, 2 * index + 2, cnt);
        return (left and right);
    }
}

bool isMaxOrder(struct Node *root)
{
    // leaf node
    if (root->left == NULL and root->right == NULL)
    {
        return true;
    }

    if (root->right == NULL)
    {
        return (root->data > root->left->data);
    }
    else
    {
        bool left = isMaxOrder(root->left);
        bool right = isMaxOrder(root->right);

        return (left and right and (root->data > root->left->data and root->data > root->right->data));
    }
}

bool isHeap(struct Node *root)
{
    int index = 0; // current index
    int totalCount = countNodes(root);
    if (isCBT(root, index, totalCount) and isMaxOrder(root))
    {
        return true;
    }
    else
    {
        return false;
    }
}
