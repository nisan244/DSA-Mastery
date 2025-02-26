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

int height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l, r) + 1;
}

vector<Node *> v;
void new_fun(Node *root)
{
    if (root == NULL)
        return;
    new_fun(root->left);
    new_fun(root->right);
    v.push_back(root);
}

int main(int argc, char const *argv[])
{
    Node *root = input_tree();
    int new_height = pow(2.00, height(root)) - 1;
    new_fun(root);
    if (new_height == v.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// DONE
// Accepted