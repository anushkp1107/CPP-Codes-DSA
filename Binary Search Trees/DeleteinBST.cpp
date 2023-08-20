/*
pehle node tk pahucho  and then if data > x then left part me jao and vice versa....

delete case 1

0 child i.e leaf node -> delete node and return null

1 child-> either left or child child exists and the other one is NULL --> parent ko delete akro and jo child hai usko parent ki jagah daal do => temp = root->left/right => delete root => return temp;

2 children -> 1] left me se max value ko laake parent node ki jagah daal do and left wle node jisko parent ki jagah daale use delete kardo

2] right me se min val lao and do the same
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

Node *minVal(Node *root)
{
    Node *temp = root;

    while (temp != NULL)
    {
        temp = temp->left;
    }
    return temp;
}


Node *deleteFromBST(Node *root, int val)
{
    // base
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // 0 child
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child

        // left child
        if (root->left != NULL and root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child

        if (root->left == NULL and root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child

        if (root->left != NULL and root->right != NULL)
        {
            int mini = minVal(root->right)->data; // root ke right ka min value save kar liye
            root->data = mini;
            root->right = deleteFromBST(root->right, mini); //root ke right se delete karo
            return root;
        }
    }

    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}ww