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

void insert_at_head(Node *&head, int v)
{
    Node *new_Node = new Node(v);
    new_Node->next = head;
    head = new_Node;
}

void insert_at_tail(Node *&head, int v)
{
    Node *new_Node = new Node(v);

    if (head == NULL)
    {
        head = new_Node;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_Node;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_Node(Node *&head, int v)
{
    if (head == NULL)
        return;
    if (v == 0)
    {
        Node *delete_head = head;
        head = head->next;
        delete delete_head;
        return;
    }

    Node *temp = head;
    for (int i = 1; i <= v - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_Node = temp->next;
    temp->next = temp->next->next;
    delete delete_Node;
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

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, v);
        }
        else if (x == 2)
        {
            if (v < size(head))
            {
                delete_Node(head, v);
            }
        }
        print_linked_list(head);
    }

    return 0;
}

// DONE 
// Accepted