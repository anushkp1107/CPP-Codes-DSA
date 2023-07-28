// Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree. Zig zag me ekbar left to right traverse and then right to left

/*
    queue bana lo and ek bool bana lo lwftToRight jisme if true we go L TO R and if false we go R TO L and push all the elements to the queue and pop accordingly.
*/

// not understodd

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

vector<int> zigZagTraversal(Node *root)
{
    vector<int> result;
    if (root == NULL)
    {
        return result;
    }

    queue<Node *> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);

        for (int i = 0; i < size; i++)
        {
            Node *frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            ans[index] = frontNode->data;

            if (frontNode->left)
            {
                q.push(frontNode->left);
            }

            if (frontNode->right)
            {
                q.push(frontNode->right);
            }

            leftToRight = !leftToRight;

            for (auto i : ans)
            {
                result.push_back(ans);
            }
        }
        return result;
    }
}

int main()
{

    return 0;
}