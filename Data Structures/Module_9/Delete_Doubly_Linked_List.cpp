// 9-6 Delete Operations on Doubly Linked List

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

void print_normal(Node *head) // O(N)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail) // O(N)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int size(Node *head) // O(N)
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

void delete_at_position(Node *head, int pos) // O(N)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete delete_node;
}

void delete_tail(Node *&head, Node *&tail) // O(1)
{
    Node *delete_node = tail;
    tail = tail->prev;

    delete delete_node;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void delete_head(Node *&head, Node *tail) // O(1)
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}

int main(int argc, char const *argv[])
{
    // Node* head = NULL;
    // Node* tail = NULL;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    Node *tail = d;
    // Connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    int pos;
    cin >> pos;

    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}
