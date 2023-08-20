// You have been given a Binary Search Tree and a target value. You
// need to find out whether there exists a pair of node values in the
// BST, such that their sum is equal to the target value.

/*
BST KA INORDER TRAVERSAL IS ALWAYS SORTED

inorder travesal nikal lo and array me push karo and then use 2 pointer

if sum > target -> j-- karna hai as last se peeche aane se values kam hoga

if sum < target so values badhana hai to i++ karo

*/

#include <bits/stdc++.h>
using namespace std;

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

void inorder(Node *root, vector<int> &in)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, in);  // L
    in.push_back(root->data); // N
    inorder(root->right, in); // R
}

bool twoSum(Node *root, int target)
{
    vector<int> inorderVal;
    inorder(root, inorderVal);

    int i = 0,
        j = inorderVal.size() - 1;

    while (i < j)
    {
        int sum = inorderVal[i] + inorderVal[j];

        if (sum == target)
        {
            return true;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}
