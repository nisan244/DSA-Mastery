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
vector<int> v;
void level_nodes(Node *root, int level)
{
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *new_node = p.first;
        int l = p.second;
        if (l == level)
        {
            v.push_back(new_node->val);
        }
        if (new_node->left)
        {
            q.push({new_node->left, l + 1});
        }
        if (new_node->right)
        {
            q.push({new_node->right, l + 1});
        }
    }
}

int main(int argc, char const *argv[])
{
    Node *root = input_tree();
    int level;
    cin >> level;
    level_nodes(root, level);
    if (v.empty())
    {
        cout << "Invalid" << endl;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// DONE
// Accepted
