// Question: Take a singly linked list as input, then take q queries. In each query you will be given an index and value. You need to insert those values in the given index and print the linked list. If the index is invalid print “Invalid”.

// input: 10 20 30 -1    Output : 10 40 20 30
// input: 7

// input: 1 40   Output : 10 40 20 30
// input: 5 50   Output : Invalid

// input: 4 50   Output : 10 40 20 30 50
// input: 0 100  Output : 100 10 40 20 30 50

// input: 7 40   Output : Invalid
// input: 1 110  Output : 100 110 10 40 20 30 50

// input: 7 40   Output : 100 110 10 40 20 30 50 40

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

void insert_at_position(Node *head, int pos, int val) // O(N)
{
    Node *New_Node = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    New_Node->next = temp->next;
    temp->next = New_Node;
    New_Node->next->prev = New_Node;
    New_Node->prev = temp;
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
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            insert_head(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x == size(head))
        {
            insert_tail(head, tail, v);
            print_normal(head);
            print_reverse(tail);
        }
        else if (x < size(head))
        {
            insert_at_position(head, x, v);
            print_normal(head);
            print_reverse(tail);
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}

// DONE