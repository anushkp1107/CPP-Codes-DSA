//* DIFFERENT TYPE OF TRAVERSALS

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

//* INORDER TRAVERSAL  --> LNR                         --> N means print

void inorder(node *root)
{
    // LNR formula

    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);        // L
    cout << root->data << endl; // N
    inorder(root->right);       // R
}

//* PREORDER TRAVERSAL --> NLR

void preorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//* POSTORDER --> LRN

void postorder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    return 0;
}