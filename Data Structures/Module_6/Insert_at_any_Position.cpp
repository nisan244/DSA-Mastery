// 6-3 Insert at any Position

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

void insert_at_tail(Node *&head, int v)
{
    Node *new_Node = new Node(v);

    if (head == NULL)
    {
        head = new_Node;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_Node;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}

void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int v)
{
    Node *new_Node = new Node(v);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;
    cout << endl
         << endl
         << "Inserted at position: " << pos << endl
         << endl;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail." << endl;
        cout << "Option 2: Print Linked List." << endl;
        cout << "Option 3: Insert at any Position." << endl;
        cout << "Option 4: Exit." << endl;
        cout << endl;
        cout << "Enter choices option: ";
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> v;
            insert_at_position(head, pos, v);
        }

        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}
