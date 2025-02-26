// 7-2 Insert at Singly Linked List Recap

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

void print_linked_list(Node * head) // O(N)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl; 
}

void insert_pos(Node* head, int pos, int val)   // O(N)
{
    Node* New_Node = new Node(val);
    Node* temp = head;
    for (int i = 0; i < pos-1; i++)    // O(N)
    {
        temp = temp->next;
    
    }
    //-----/ temp = pos - 1 /---------
    New_Node->next = temp->next;
    temp->next = New_Node;
}

void insert_head(Node* &head, int val)  // O(1)
{
    Node* New_Node = new Node(val);
    New_Node->next = head;
    head = New_Node;
}

void insert_tail(Node* &head, Node* &tail, int val)  // O(1)
{
    Node* New_Node = new Node(val);
    if (head == NULL)
    {
        head = New_Node;
        tail = New_Node;
        return;
    }
    tail->next = New_Node;
    tail = New_Node;
    
}

int size(Node* head)    // O(N)
{
    Node* temp = head;
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
    Node* head = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);


    Node* tail = e;

    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_linked_list(head);
    cout << "Tail - " << tail->val << endl;


    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid index" << endl;
    }
    else if(pos == 0)
    {
        insert_head(head, val);
    }
    else if(pos == size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert_pos(head, pos, val);
    }
    

    // print_linked_list(head);
    // insert(head, 2, 100);
    // insert(head, 4, 200);
    print_linked_list(head);
    cout << "Tail - " << tail->val << endl;



    return 0;
}
