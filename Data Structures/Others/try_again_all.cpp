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

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* New_Node = new Node(val);
    while (tail == NULL)
    {
        head = New_Node;
        tail = New_Node;
        return;
    }
    tail->next = New_Node;
    New_Node->prev = tail;
    tail = tail->next;
}

void print_normal(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print_normal(head);
    

    return 0;
}
