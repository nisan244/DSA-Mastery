// 21-3 Search in BST

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root) // if (root != NULL)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        //-----
        int l, r;
        cin >> l >> r;
        Node *new_left;
        Node *new_right;
        if (l == -1)
            new_left = NULL;
        else
            new_left = new Node(l);

        if (r == -1)
            new_right = NULL;
        else
            new_right = new Node(r);

        p->left = new_left;
        p->right = new_right;

        //------
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}

bool search(Node *root, int x) // O(h)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return search(root->left, x);
        // ----------- or --------------
        // bool l = search(root->left, x);
        // if(l == true)
        //     return true;
        // else
        //     return false;
    }
    else
    {
        return search(root->right, x);
    }
}

int main(int argc, char const *argv[])
{
    Node *root = input_tree();
    // level_order(root);
    if (search(root, 7))
    {
        cout << "Yes, Found" << endl;
        // cout << root->val << " " << root->left->val << " " << root->right->val << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
