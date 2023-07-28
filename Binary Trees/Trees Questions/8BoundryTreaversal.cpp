// Given a Binary Tree, find its Boundary Traversal. boundry matlab outer nodes only

/*
algo -> left part ko print karo except the leaf node
then saare leaf nodes ko print kro from left to right
then right part ko print karo but in reverse , except leaf nodes
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

void traverseLeft(Node *root, vector<int> &ans)
{
    if (root == NULL and (root->left == NULL and root->right == NULL))
    { // 2nd condn is leaf node
        return;
    }

    ans.push_back(root->data);
    if (root->left)
    {
        traverseLeft(root->left, ans);
    }
    else
    {
        traverseLeft(root->right, ans);
    }
}

void traverseLeaf(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL and root->right == NULL) // leaf node
    {
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}

void traverseRight(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL and root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }

    if (root->right)
    { // agar root ka right exist karta
        traverseRight(root->right, ans);
    }
    else
    {
        traverseRight(root->left, ans);
    }

    // wapas aagye to ans store karlo as we need to print in reverse
    ans.push_back(root->data);
}

vector<int> boundary(Node *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }

    ans.push_back(root->data);

    // traverse left part
    traverseLeft(root->left, ans);

    // right subtree
    traverseLeaf(root->right, ans);
    // left subtree
    traverseLeaf(root->left, ans);

    // traverse Right part
    traverseRight(root->right, ans);
    return ans;
}
