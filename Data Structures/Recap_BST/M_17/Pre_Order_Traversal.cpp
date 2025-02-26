#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//--------------------------------------

//   // Pre Order Traversel
// void pre_order(Node *root)
// {
//     if(root == NULL)
//         return;
//     cout << root->val << " ";
//     pre_order(root->left);
//     pre_order(root->right);
// }

//-----------------------------------------

//    // Post Order Traversel
// void post_order(Node *root)
// {
//     if(root == NULL)
//         return;
//     post_order(root->left);
//     post_order(root->right);
//     cout << root->val << " ";
// }

//------------------------------------------

    // Post Order Traversel
void in_order(Node *root)
{
    if(root == NULL)
        return;
    in_order(root->left);
    cout << root->val << " ";
    in_order(root->right);
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // Connection
    root->left = a;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    root->right = b;
    b->right = d;
    d->left = f;
    d->right = g;

    in_order(root);

    return 0;
}
