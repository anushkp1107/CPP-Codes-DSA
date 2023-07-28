// Given a binary tree, find its height.height is the longest path bewteen the root and the leaf node

/*
recursion se left aur right subtree ke heights nikal lo aur usme root node ko add kardo to height mil jayega
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

class Solution
{
public:
    // Function to find the height of a binary tree.
    int height(struct Node *node)
    {
        // base case
        if (node == NULL)
        {
            return 0;
        }

        int left = height(node->left); // function call hone pe left wla traverse ho rha
        int right = height(node->right);

        int ans = max(left, right) + 1; //+1 to add the root node
        return ans;
    }
};
