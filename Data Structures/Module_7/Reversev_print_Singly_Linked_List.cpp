// 7-7 Printing Singly Linked List in Reverse

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_reverse(Node *n)
{
    // Base Case
    if (n == NULL)
        return;
    print_reverse(n->next);
    cout << n->val << " ";
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1)
            break;
        insert_tail(head, tail, val);
    }
    

    // Node *head = new Node(10);
    // Node *b = new Node(20);
    // Node *c = new Node(30);
    // Node *d = new Node(40);
    // Node *e = new Node(50);
    // head->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;

    print_normal(head);
    cout << endl;
    print_reverse(head);

    return 0;
}



// ---------------------



