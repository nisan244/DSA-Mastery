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
    cout << "Your Linked List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(int argc, char const *argv[])
{
    // Node *head = NULL;
    // while (true)
    // {
    //     cout << "Option 1: Insert at Tail" << endl;
    //     cout << "Option 2: Print Linked List" << endl;
    //     cout << "Option 3: Terminate" << endl;
    //     int op;
    //     cin >> op;
    //     if (op == 1)
    //     {
    //         cout << "Please enter value: " << endl;
    //         int v;
    //         cin >> v;
    //         insert_at_tail(head, v);
    //     }
    //     else if(op == 2)
    //     {
    //         print_linked_list(head);
    //     }
    //     else if (op == 3)
    //     {
    //         break;
    //     }
    // }
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if(op == 1)
        {
            cout << "Please enter value: " << endl;
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
            break;
        }
        cout << endl;
        cout << endl;

        

    }


    return 0;
}
