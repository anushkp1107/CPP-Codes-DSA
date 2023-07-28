// Given a binary tree of size  N, a node, and a positive integer k., Your task is to complete the function kthAncestor(), the function should return the kth ancestor of the given node in the binary tree. If there does not exist any such ancestor then return -1.

/*
recursion se traverse karo to find the required node ...when we find the req node then we reduce the value of k by 1 and jaise jaise upar jayenge k ke value ko ek se decrement karenge and jab k==0 ho jayenga tab jis node pe honge that will be the ans
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

Node *solve(Node *root, int &k, int node)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == node)
    {
        return root;
    }

    Node *leftAns = solve(root->left, k, node);
    Node *rightAns = solve(root->right, k, node);

    if (leftAns != NULL and rightAns == NULL)
    {
        k--;
        if (k <= 0)
        {
            k = INT_MAX; // as k 0 hogya to usko itna bada bana do ki k-- karke fir 0 na mil jaaye aur current ans ko return karle
            return root; // as k zero ho gya to ans mil gya
        }
        return leftAns;
    }

    if (leftAns == NULL and rightAns != NULL)
    {
        k--;
        if (k <= 0)
        {
            k = INT_MAX; // as k 0 hogya to usko itna bada bana do ki k-- karke fir 0 na mil jaaye aur current ans ko return karle
            return root; // as k zero ho gya to ans mil gya
        }
        return rightAns;
    }
    return NULL;
}

int kthAnsector(Node *root, int k, int node)
{
    Node *ans = solve(root, k, node);
    if (ans == NULL or ans->data == node)
    {
        return -1;
    }
    else
    {
        return ans->data;
    }
}
