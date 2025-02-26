// 7-6 Take Singly Linked List Input Recap

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

void insert_tail(Node *&head, Node *&tail, int val) // O(1)
{
    Node *New_Node = new Node(val);
    if (head == NULL)
    {
        head = New_Node;
        tail = New_Node;
        return;
    }
    tail->next = New_Node;
    tail = New_Node;
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

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_linked_list(head);

    return 0;
}
