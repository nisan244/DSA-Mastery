// 9-4 Insert at Head and Tail in Doubly Linked List

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

void insert_at_position(Node *head, int pos, int val) // O(N)
{
    Node *New_Node = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    New_Node->next = temp->next;     // 100 -> 30
    temp->next = New_Node;           // 20-> 100
    New_Node->next->prev = New_Node; // 100 <- 30
    New_Node->prev = temp;           // 20 <- 100
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

void insert_head(Node *&head, Node *&tail, int val) // O(1)
{
    Node *New_Node = new Node(val);
    if (head == NULL)
    {
        head = New_Node;
        tail = New_Node;
        return;
    }
    New_Node->next = head;
    head->prev = New_Node;

    head = New_Node;
}

void insert_tail(Node *&head, Node *&tail, int val) // O(1)
{
    Node *New_Node = new Node(val);
    if (tail == NULL)
    {
        head = New_Node;
        tail = New_Node;
        return;
    }
    tail->next = New_Node;
    New_Node->prev = tail;
    tail = tail->next;
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

    int pos, val;
    cin >> pos >> val;

    insert_tail(head, tail, val);

    // if (pos == 0)
    // {
    //     insert_head(head, tail, val);
    // }
    // else if(pos == size(head))
    // {
    //     insert_tail(tail, val);
    // }
    // else if (pos >= size(head))
    // {
    //     cout << "Invalid" << endl;
    // }
    // else
    // {
    //     insert_at_position(head, pos, val);
    // }

    print_normal(head);
    print_reverse(tail);

    return 0;
}
