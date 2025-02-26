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

// void level_order(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         // 1. First e ber kore ana
//         Node *p = q.front();
//         q.pop();

//         // 2. Jabotiyo kaj kora
//         // cout << p->left->val << " ";
//         int n = p->left->val;
//         int m = p->right->val;
//         cout << n + m << endl;

//         // 3. Tar children gulo ke rakha
//         if (p->left != NULL) // if(fr->left) same
//             q.push(p->left);
//         if (p->right != NULL)
//             q.push(p->right);
//     }
// }

//---------------------------------------------

// void level_order(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         // 1. First e ber kore ana
//         Node *p = q.front();
//         q.pop();

//         // 2. Jabotiyo kaj kora
//         cout << p->left->val << " ";

//         // 3. Tar children gulo ke rakha
//         if (p->left != NULL) // if(fr->left) same
//             q.push(p->left);
//         if (p->right != NULL)
//             q.push(p->right);
//     }
// }


void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left != NULL)
            q.push(f->left);
        if(f->right != NULL)
            q.push(f->right);
    }
    
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
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->left = i;

    level_order(root);

    return 0;
}
