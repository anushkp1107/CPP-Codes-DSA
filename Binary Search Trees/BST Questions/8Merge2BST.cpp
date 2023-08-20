//  VERY IMP

/*
given 2 BSTs
do the inorder traversal of both the bst ans store it in a array
merge the 2 sorted arrays
then do the inorder to bst
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

void inorder(Node *root, vector<int> &in)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

vector<int> mergeArrays(vector<int> &a, vector<int> &b)
{
    vector<int> ans(a.size() + b.size());

    int i = 0, j = 0;

    while (i < a.size() and j < b.size())
    {
        if (a[i] < b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else
        {
            ans.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size())
    {
        ans.push_back(a[i]);
        i++;
    }
    while (i < b.size())
    {
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

Node *inorderToBST(int s, int e, vector<int> inorderVal)
{
    // base
    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;

    Node *root = new Node(inorderVal[mid]);
    root->left = inorderToBST(s, mid - 1, inorderVal);
    root->right = inorderToBST(mid + 1, e, inorderVal);
    return root;
}

Node *mergeBST(Node *root1, Node *root2)
{
    // step: store inorder
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    vector<int> MergedArray = mergeArrays(bst1, bst2);

    int s = 0, e = MergedArray.size() - 1;
    return inorderToBST(s, e, MergedArray);
}

// APPROACH 2-> DONT USE EXTRA SPACE OF ARRAYS...CHANGE THE LINKS OF THE GIVEN TREES TO GET THE DESIRED RESULT

// NOT DONE FULLY

/*
    tBST 1 and 2 ko sorted LL me flatten karo

    [convert right subtree to LL by recursion and we get the head of the LL in retuen....then root->right ko head pe point kardo and head->left ko root pe point kardo (as doubly ended LL hai) and then head ko root pe point kardo and now only left part left so left part ko recursion se LL bana do]


    merge 2 sorted LL
    sorted LL ko BST banao
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

void inorder(Node *root, vector<int> &in)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

vector<int> mergeArrays(vector<int> &a, vector<int> &b)
{
    vector<int> ans(a.size() + b.size());

    int i = 0, j = 0;

    while (i < a.size() and j < b.size())
    {
        if (a[i] < b[j])
        {
            ans.push_back(a[i]);
            i++;
        }
        else
        {
            ans.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size())
    {
        ans.push_back(a[i]);
        i++;
    }
    while (i < b.size())
    {
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}

Node *inorderToBST(int s, int e, vector<int> inorderVal)
{
    // base
    if (s > e)
    {
        return NULL;
    }

    int mid = (s + e) / 2;

    Node *root = new Node(inorderVal[mid]);
    root->left = inorderToBST(s, mid - 1, inorderVal);
    root->right = inorderToBST(mid + 1, e, inorderVal);
    return root;
}

void sortedIntoDLL(Node *root, Node *&head)
{
    if (root == NULL)
    {
        return NULL;
    }

    sortedIntoDLL(root->right, head);

    root->right = head;

    if (head != NULL)
    {
        head->left = root;
    }

    head = root;

    sortedIntoDLL(root->left, head);
}

// merge the 2 sorted LL
Node *mergeLL(Node *head1, Node *head2)
{
    Node *head = NULL;
    Node *tail = NULL;

    while (head1 != NULL and head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            if (head == NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else
        {
            if (head == NULL)
            {

                head = head2;
                tail = head2;
                head1 = head2->right;
            }
            else
            {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }

    while (head1 != NULL)
    {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while (head2 != NULL)
    {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }
    return head;
}

Node *mergeBST(Node *root1, Node *root2)
{
    // step: store inorder
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    vector<int> MergedArray = mergeArrays(bst1, bst2);

    int s = 0, e = MergedArray.size() - 1;
    return inorderToBST(s, e, MergedArray);
}