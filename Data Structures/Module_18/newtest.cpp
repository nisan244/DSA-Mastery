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

int sum_left(Node *root, bool flag)
{
    if (!root)
        return 0;

    int sum = 0;
    if (flag)
    {
        sum += root->val;
    }
    sum += sum_left(root->left, true);
    sum += sum_left(root->right, false);
    return sum;
}

int main(int argc, char const *argv[])
{
    Node *root = input_tree();
    cout << sum_left(root, true) - root->val << endl;

    return 0;
}
