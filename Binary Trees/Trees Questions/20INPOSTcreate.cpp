// Tree from Postorder and Inorder

// Given inorder and postorder traversals of a Binary Tree in the arrays in[] and post[] respectively. The task is to construct the binary tree from these traversals.

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

// int findPosition(int in[], int element, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (in[i] == element) // element inorder me kaha hai uska index nikalo
//         {
//             return i;
//         }
//         return -1;
//     }
// }

// Node *solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n)
// {
//     if (index >= n or inorderStart > inorderEnd)
//     {
//         return NULL;
//     }

//     int element = pre[index++]; // preorder ka startinf index
//     Node *root = new Node(element);
//     int position = findPosition(in, element, n);

//     // recursive calls
//     root->left = solve(in, pre, index, inorderStart, position - 1, n);
//     root->right = solve(in, pre, index, position + 1, inorderEnd, n);
//     return root;
// }

// Node *buildTree(int in[], int pre[], int n)
// {
//     int preOrderIndex = 0;
//     Node *ans = solve(in, pre, preOrderIndex, 0, n - 1, n);
//     return ans;
// }

//* OPTIMISED CODE

void createMapping(int in[], map<int, int> &nodeToIndex, int n)
{
    for (int i = 0; i < n; i++)
    {
        nodeToIndex[in[i]] = i;
    }
}

Node *solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex)
{
    if (index >= n or inorderStart > inorderEnd)
    {
        return NULL;
    }

    int element = pre[index++]; // preorder ka startinf index
    Node *root = new Node(element);
    int position = nodeToIndex[element];

    // recursive calls
    root->left = solve(in, pre, index, inorderStart, position - 1, n, nodeToIndex);
    root->right = solve(in, pre, index, position + 1, inorderEnd, n, nodeToIndex);
    return root;
}

Node *buildTree(int in[], int pre[], int n)
{
    int preOrderIndex = 0;
    map<int, int> nodeToIndex;
    createMapping(in, nodeToIndex, n);
    Node *ans = solve(in, pre, preOrderIndex, 0, n - 1, n);
    return ans;
}