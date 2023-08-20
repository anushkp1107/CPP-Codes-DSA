/*

    IN A BST THE LEFT SUBTREE ALWAYS HAS VALUES SMALLER THAN THE ROOT Node AND THE RIGHT SUBTREE HAS VALUES GREATER THAN THE ROOT Node...this also applies for every Node along with the root Node

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

//* LEVEL ORDER TRAVERSAL SAME AS PREVIOUS

void levelOrderTreaversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // purana level complete traverse ho chuka hai
            if (!q.empty())
            {
                // queue still has some child noces left
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

//! NEW THING

Node *insertIntoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if (d > root->data)
    {
        // right part me insert karna hai
        root->right = insertIntoBST(root->right, d);
    }

    else
    {
        // left part me insert karna hai
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

//* NEW THING
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node *root = NULL;

    cout << "enter data to create BST" << endl;

    takeInput(root);

    levelOrderTreaversal(root); // to print the data

    return 0;
}

//* preorder postorder inorder all codes same as normal binary trees

void inorder(Node *root)
{
    // LNR formula

    // base case
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);        // L
    cout << root->data << endl; // N
    inorder(root->right);       // R
}

//* PREORDER TRAVERSAL --> NLR

void preorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//* POSTORDER --> LRN

void postorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

//* TC == O(logn)