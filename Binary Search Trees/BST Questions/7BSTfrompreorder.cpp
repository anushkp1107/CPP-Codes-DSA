// PREORDER TRAVERSAL GIVEN .. CONTRUCT A BST FROM THE GIVEN ELEMENTS

/*
    basic approach is to use the insert into bst function (BST.cpp)

    take a maxi = int_max and a mini  = int_min
    then make the first element the root and then start traversing the given elements.
    then after root node change the int max to the root->data (int min , root->data) and do the same for each traversal [chenge the int max to the current element while checking if the current traversal number lies between (int min , element)]
*/

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

BinaryTreeNode<int> *solve(vector<int> &preorder, int mini, int maxi, int &i)
{
    if (i >= preorder.size())
    {
        return NULL;
    }

    if (preorder[i] < mini || preorder[i] > maxi)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(preorder[i++]); // har traversed element ka naam root le rhe

    root->left = solve(preorder, mini, root->data, i);
    root->left = solve(preorder, root->data, maxi, i);
    return root;
}

BinaryTreeNode<int> *preorderToBST(vector<int> &preoder)
{
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    return solve(preorder, mini, maxi, i);
}
