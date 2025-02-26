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
    if (root)
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

void left_order_node(Node *root)
{
    if (root == NULL)
        return;

    if (root->left == NULL)
    {
        left_order_node(root->right);
    }
    left_order_node(root->left);
    cout << root->val << " ";
}
void right_order_node(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    if (root->right == NULL)
    {
        right_order_node(root->left);
    }
    right_order_node(root->right);
}

int main(int argc, char const *argv[])
{
    Node *root = input_tree();

    if (root->left)
    {
        left_order_node(root);
    }
    if (!root->left)
    {
        right_order_node(root);
    }
    else
    {
        right_order_node(root->right);
    }

    return 0;
}

// DONE 
// Accepted