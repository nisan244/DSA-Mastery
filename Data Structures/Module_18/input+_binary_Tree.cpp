// // 18-4 Binary Tree Input Implementation

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *input_tree()
// {
//     int val;
//     cin >> val;
//     Node *root;
//     if (val == -1)
//         root = NULL;
//     else
//         root = new Node(val);

//     queue<Node *> q;
//     if (root) // if (root != NULL)
//         q.push(root);
//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         //-----
//         int l, r;
//         cin >> l >> r;
//         Node *new_left;
//         Node *new_right;
//         if (l == -1)
//             new_left = NULL;
//         else
//             new_left = new Node(l);

//         if (r == -1)
//             new_right = NULL;
//         else
//             new_right = new Node(r);

//         p->left = new_left;
//         p->right = new_right;

//         //------
//         if (p->left)
//             q.push(p->left);
//         if (p->right)
//             q.push(p->right);
//     }
//     return root;
// }

// void level_order_print(Node *root)
// {
//     if(root == NULL)
//     {
//         cout << "Empty" << endl;
//         return;
//     }
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         // 1. First e ber kore ana
//         Node *fr = q.front();
//         q.pop();

//         // 2. Jabotiyo kaj kora
//         cout << fr->val << " ";

//         // 3. Tar children gulo ke rakha
//         if (fr->left != NULL) // if(fr->left) same
//             q.push(fr->left);
//         if (fr->right != NULL)
//             q.push(fr->right);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     Node *root = input_tree();

//     level_order_print(root);
//     return 0;
// }


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
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if(root != NULL)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *new_left;
        Node *new_right;
        if(l == -1)
            new_left = NULL;
        else
            new_left = new Node(l);
        
        if(r == -1)
            new_right = NULL;
        else
            new_right = new Node(r);

        p->left = new_left;
        p->right = new_right;

        if (p->left != NULL)
            q.push(p->left);
        if(p->right != NULL)
            q.push(p->right);
    }
    return root;
}
void level_order_print(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    
}

int main(int argc, char const *argv[])
{
    Node *root = input_tree();

    level_order_print(root);

    return 0;
}
