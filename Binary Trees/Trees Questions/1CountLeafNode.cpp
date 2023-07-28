// You are given a Binary tree. You have to count and return the
// number of leaf nodes present in it.
// A binary tree is a tree data structure in which each node has at
// most two children, which are referred to as the left child and the
// right child
// A node is a leaf node if both left and right child nodes of it are
// NULL.

// use any of the traversals

#include <bits/stdc++.h>
using namespace std;


    //Coding ninjas template
    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };

void inorder(BinaryTreeNode<int> *root, int &count)
{

    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left,count); // L

    //  leaf node

    if(root->left ==NULL and root->right ==NULL){
        count++;
    }

    inorder(root->right,count);       // R
}

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}

