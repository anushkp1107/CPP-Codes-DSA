// you are given  a binary tree with N nodess . return  the size of the largest subtree of the binary tree which is also a BST.

// CHECK FOR OTHR SOLN ON YT

/*
    brute force is to visit every node and check if BST or not
    to optimise we if find a bst then we can check for 3 things -> is left subtree valid BST  , right sutree valid BST and if max of left subtree < root->data < max of right subtree...earlier we were checking each ndoe after visiting a node to check fot BST.
*/

/*
    idhar node visit ke baad ham us node se 4 chiz return karwayenge -> int maxi , int mini , bool isBST and int size. pehle leaf node pe jaake ye return honge...ex leaf node is 1 -> {1,1,T , 1} ese karenge thrn unke root node pe jaake x<x<x wla conditiion check karenge. int maxi -> (root->node and right tree ka node) and int mini = (root->node and left tree ka node)
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

class info
{
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(Node *root, int &maxSize)
{
    if (root == NULL)
    {
        return {INT_MIN, INT_MAX, true, 0};
    }

    info left = solve(root->left, maxSize);
    info right = solve(root->right, maxSize);

    info currNode;

    currNode.size = left.size + right.size + 1;
    currNode.maxi = max(root->data, right.maxi);
    currNode.mini = min(root->data, left.mini);

    if (left.isBST and right.isBST and (root->data > left.maxi and root->data < right.mini))
    {
        currNode.isBST = true;
    }
    else
    {
        currNode.isBST = false;
    }

    if (curNode.isBST)
    {
        maxSize = max(maxSize, currNode.size);
    }

    return currNode;
}

int largestBST(Node *root)
{
    int maxSize = 0;
    info temp = solve(root, maxSize);
    return maxSize;
}
