// 6-6 Delete Head

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

void insert_at_head(Node *&head, int v)
{
    Node *new_Node = new Node(v);
    new_Node->next = head;
    head = new_Node;
    cout << endl
         << "Insert at head." << endl
         << endl;
}

void delete_form_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_Node = temp->next;
    temp->next = temp->next->next;
    delete delete_Node;
    cout << endl
         << "Deleted Position " << pos << endl
         << endl;
}

void delete_head(Node *&head)
{
    Node *delete_Node = head;
    head = head->next;
    delete delete_Node;
    cout << endl
         << "Deleted head" << endl
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
        cout << "Option 4: Insert at Head." << endl;
        cout << "Option 5: Delete from Position." << endl;
        cout << "Option 6: Delete head." << endl;
        cout << "Option 0: Exit." << endl;
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
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_form_position(head, pos);
            }
        }
        else if (op == 6)
        {
            delete_head(head);
        }

        else if (op == 0)
        {
            break;
        }
    }

    return 0;
}




