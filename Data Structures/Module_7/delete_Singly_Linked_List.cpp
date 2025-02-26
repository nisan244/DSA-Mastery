// 7-4 & 7-5 Delete Head from Singly Linked List Recap

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

void delete_node(Node* head, int pos)
{
    Node* temp = head;
    for(int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    Node* delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
}

void delete_head(Node* &head)   // O(1)
{
    Node* delete_node = head;
    head = head->next;
    delete delete_node;
}

void print_linked_list(Node * head)
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
    Node* head = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_linked_list(head);

    int pos;
    cin >> pos;


    delete_node(head, pos);

    print_linked_list(head);



    return 0;
}
