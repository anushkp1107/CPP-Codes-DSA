// Predecessor And Successor In BST

// You have been given a binary search tree of integers with 'N'nodes. You are also given 'KEY' which represents data of a node of this tree. Your task is to find the predecessor and successor of the given node in the BST.

/*
    pehle key tak traverse karo aur wha tk pahucho and then for predecessor hame key se just smaller element chaiye so we need to get the left subtree ka max element and for successor we need the just bigger element so we need right subtree ka min element.
    for minVal (right subtree) we go temp->right till temp !=NULL and for maxVal (left subtree) vice versa.
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

pair<int, int> preSucc(Node *root, int key)
{
    Node *temp = root;
    int pre = -1;
    int suc = -1;

    // KEY TK TRAVERSE KARO
    while (temp->data != key)
    {

        if (temp->data > key)
        {
            // as ye key se bada hai to possible succrrsor ho sakta hai so store the ans
            // agar key se bada mil gya matlab key left part me hogi
            suc = temp->data;
            temp = temp->left;
        }
        else
        { // chota hai
            pre = temp->data;
            temp = temp->right;
        }
    }

    // pred succ nikalo

    // pred
    Node *leftTree = temp->left; // ek node banao left tree ko travese karne
    while (leftTree != NULL)
    {
        pre = leftTree->data;       // possible ans to save karo
        leftTree = leftTree->right; // as left subtree ka macx value nikalna hai
    }

    // succ
    Node *rightTree = temp->right;
    while (rightTree != NULL)
    {
        suc = rightTree->data;
        rightTree = rightTree->left;
    }

    pair<int, int> ans = make_pair(pre, suc);
    return ans;
}