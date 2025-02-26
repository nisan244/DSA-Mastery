// 10-5 Reverse Singly Linked List

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

void print_recursion(Node* n)
{   
    if(n == NULL) return;
    cout << n->val << " ";
    print_recursion(n->next);
}

void print_reverse(Node* n)
{   
    if(n == NULL) return;
    print_recursion(n->next);
    cout << n->val << " ";
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


void reverse_node(Node* &head, Node* cuent)
{
    if(cuent->next == NULL)
    {
        head = cuent;
        return;
    }
    reverse_node(head, cuent->next);
    cuent->next->next = cuent;
    cuent->next = NULL;
}

int main(int argc, char const *argv[])
{
    Node * head = new Node(10);
    Node * b = new Node(20);
    Node * c = new Node(30);

    head->next = b;
    b->next = c;

    // print_recursion(head);
    reverse_node(head, head);
    print_linked_list(head);
    


    return 0;
}
