// Given a binary tree and a node data called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. It is known that in 1 second all nodes connected to a given node get burned. That is its left child, right child, and parent.
// Note: The tree contains unique values.

/*
burn karne ke liye node aur parents pata karne padenege so uske liye ek map bana lo to by level order traversal
find target node
ek data structure banao to track visisted nodes and ek aur to keep track of parent nodes
*/

// https://youtu.be/XLdpy0_6MR4 -->do again

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

Node *createMapping(Node *root, int target, map<Node *, Node *> &nodeToParent)
{
    // create mapping
    //  return target Node
    Node *res = NULL;

    queue<Node *> q;
    q.push(root);
    nodeToParent[root] = NULL;

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front->data == target)
            res = front;

        if (front->left)
        {
            nodeToParent[front->left] = front;
            q.push(front->left);
        }

        if (front->right)
        {
            nodeToParent[front->right] = front;
            q.push(front->right);
        }
    }
    return res;
}

void BurnTree()
{
}

int minTime(Node *root, int target)
{
    int ans = 0;
    map<Node *, Node *> nodeToParent;
    Node *targetNode = createMapping(root, target, nodeToParent);

    BurnTree(targetNode, nodeToParent);

    return ans;
}

int main()
{

    return 0;
}