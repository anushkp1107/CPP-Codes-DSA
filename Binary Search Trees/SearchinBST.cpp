// search in a BST

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

// below code might give TLE

// RECURSIVE

bool Search(Node<int> *root, int x)
{
    if (root->data == x)
    {
        return false;
    }

    if (root->data > x)
    {
        // left part
        return Search(root->left, x);
    }

    if (root->data < x)
    {
        // right part
        return Search(root->right, x);
    }
}

// ITERATIVE

bool Search(Node<int> *root, int x)
{

    Node<int> *temp = root;

    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }

        if (temp->data > x)
        {
            temp = temp->left;
        }

        else
        {
            temp = temp->right;
        }
    }

    return false;
}
