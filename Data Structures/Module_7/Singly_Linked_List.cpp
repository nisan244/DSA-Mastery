// 7-1 Singly Linked List Recap

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // cout << head->val << endl;
    // cout << b->next->val << endl;

    print_linked_list(head);

    return 0;
}





