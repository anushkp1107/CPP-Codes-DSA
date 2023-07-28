// Given two binary trees, the task is to find if both of them are identical or not.

/*
first root node ko check karo and then if both are same then use recursion to check the other left and right subtrees to know if identical or not
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

bool isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL and r2 == NULL)
    {
        return true;
    }
    if (r1 == NULL and r2 != NULL)
    {
        return false;
    }
    if (r1 != NULL and r2 == NULL)
    {
        return false;
    }

    bool left = isIdentical(r1->left, r2->left);
    bool right = isIdentical(r1->right, r2->right);

    bool value = r1->data == r2->data;

    if (left and right and value)
    {
        return true;
    }
    else
    {
        return false;
    }
}

