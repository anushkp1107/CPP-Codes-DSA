// Find The diameter of a tree (sometimes called the width). It is the number of nodes on the longest path between two end nodes.

/*
    we can get the diameter by getting the height of the left / right / lrft+right subtree and find the max of those to get the answer
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

int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1, max(op2, op3));
    return ans;
}

/*
Approach 2

to reduce time complexcity -> we can make a pair that returns the diameter and height at every node visited whereas earlier we had 3 function calls at each node i.e check left then right and then height wla call
*/

pair<int, int> diameterFast(Node *root)
{
    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }

    pair<int, int> left = diameterFast(root->left); // function called until base case hit
    pair<int, int> right = diameterFast(root->right);

    int op1 = left.first; // first block me diameter stored hai
    int op2 = right.first;
    int op3 = left.second + right.second + 1; // second block me height stored hai

    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3)); // diameter wla ans
    ans.second = max(left.second, right.second) + 1;

    return ans;
}

int diameter(Node *root)
{
    return diameterFast(root).first;
}