// 18-6 Count Number of Leaf Nodes in a Binary Tree

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

// int count_leaf(Node *root)
// {
//     if (root == NULL)
//         return 0;
//     if(root->left == NULL && root->right == NULL)
//         return 1;
//     else
//     {
//         int l = count_leaf(root->left);
//         int r = count_leaf(root->right);
//         return l + r;
//     }
// }

// int count_leaf(Node *root)
// {
//     if (root == NULL)
//         return 0;
//     if(root->left == NULL && root->right == NULL)
//         return 1;
//     else
//     {
//         int l = count_leaf(root->left);
//         int r = count_leaf(root->right);
//         return l + r;
//     }
// }

//--------------------
// int count(Node *root)
// {
//     if (root == NULL)
//         return 0;
//     int l = count(root->left);
//     int r = count(root->right);
//     return l + r + 1;
// }

//---------------

// int count_leaf(Node *root)
// {
//     if (root == NULL)
//         return 0;

//     // int left_subtree_sum = count_leaf(root->left);
//     // int current_node_value = root->val;

//     // return current_node_value + left_subtree_sum ;

//     int l = count_leaf(root->right);
//     // int r = (root->val);

//     int p = count_leaf(root->left) + l;
//     // int q = p + root->val;

//     // return l + r ;
//     // return p + q ;

//     // int sum = (l + r) + (p + q);
//     // int sum = ( r) + ( q);
//     // return sum;
//     int sum = (p + root->val) - l;
//     return sum;
//     // return l + p + root->val;

// }

// void post_Order(Node *root)
// {
//     // base case
//     if (root == NULL)
//     {
//         return;
//     }
//     post_Order(root->left);
//     cout << root->left->val << " ";
//     post_Order(root->right);
// }




int sum_of(Node *root, bool isleft = false)
{
    if(root == NULL)
        return 0;
    if(root->left == NULL && root->right == NULL & isleft)
    {
        return root->val;
    }
    int sum_l = sum_of(root->left, true);
    int sum_r = sum_of(root->right, false);
    return sum_l + sum_r;
}



int main(int argc, char const *argv[])
{
    Node *root = input_tree();
    // cout << count_leaf(root) << endl;
    // cout << count(root) << endl;

    // post_Order(root);

    cout << sum_of(root) << endl;

    return 0;
}
