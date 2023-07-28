// Construct Tree from Inorder & Preorder

// Given 2 Arrays of Inorder and preorder traversal. The tree can contain duplicate elements. Construct a tree and print the Postorder traversal.

// https://youtu.be/ffE1xj51EBQ

/*
take index element of pre as root element and find root element ki position in inorder...then root->left call from inorder start to position -1 tk  and root-> right ka call from position+1 to inorder ke end tk
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

int findPosition(int in[], int element, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (in[i] == element) // element inorder me kaha hai uska index nikalo
        {
            return i;
        }
        return -1;
    }
}

Node *solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n)
{
    if (index >= n or inorderStart > inorderEnd)
    {
        return NULL;
    }

    int element = pre[index++]; // preorder ka startinf index
    Node *root = new Node(element);
    int position = findPosition(in, element, n);

    // recursive calls
    root->left = solve(in, pre, index, inorderStart, position - 1, n);
    root->right = solve(in, pre, index, position + 1, inorderEnd, n);
    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int preOrderIndex = 0;
    Node *ans = solve(in, pre, preOrderIndex, 0, n - 1, n);
    return ans;
}
