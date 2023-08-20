// FIND THE MIN AND THE MAX VALUE IN A BST

/*
for min value we need to go to the leftmost node of the BST and similarly for thr max value we need to go to the rightmost node
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

Node *maxVal(Node *root)
{
    Node *temp = root;

    while (temp != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

int main()
{

    return 0;
}