#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl; 
}

void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl; 
}

void delete_pos(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
}

void delte_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
}

void delte_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    if(tail == NULL)
    {
        head = NULL;
        return;
    }
}

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
    b->prev = head;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;
    d->next = e;
    e->prev = d;
    print_normal(head);
    print_reverse(tail);

    int pos;
    cin >> pos;

    if(pos == 0)
    {
        delte_head(head, tail);
    }
    else if(pos == size(head) - 1)
    {
        delte_tail(head, tail);
    }
    else
    {
        delete_pos(head, pos);
    }


    print_normal(head);
    print_reverse(tail);

    return 0;
}
