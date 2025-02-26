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

void insert_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
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

    int pos, n;
    cin >> pos >> n;

    if(pos == 0)
    {
        insert_head(head, n);
    }
    else
    {
        insert_pos(head, pos, n);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}
