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

void delete_pos(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_head(Node *&head)
{
    Node *delteNode = head;
    head = head->next;
    delete delteNode;
}

void print_normal(Node *head)
{
    cout << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    Node *tail = e;
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_normal(head);

    int pos;
    cin >> pos;

    if (pos == 0)
    {
        delete_head(head);
    }
    else
    {
        delete_pos(head, pos);
    }

    print_normal(head);

    return 0;
}
