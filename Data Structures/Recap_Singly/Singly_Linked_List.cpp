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

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_any_pos(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *head)
{
    if(head == NULL)
        return;
    print_reverse(head->next);
    cout << head->val << " ";
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
    // Node *head = NULL;
    // Node *tail = NULL;
    // int val;
    // while (true)
    // {
    //     cin >> val;
    //     if(val == -1) break;
    //     insert_tail(head, tail, val);
    // }

    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    Node *tail = e;
    head->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_normal(head);

    print_reverse(head);
    cout << endl;
    cout << "Head - " << head->val << endl;
    cout << "Tail - " << tail->val << endl;

    int pos, n;
    cin >> pos >> n;

    if (pos == 0)
    {
        insert_head(head, n);
    }
    else if(pos == size(head))
    {
        insert_tail(head, tail, n);
    }
    else
    {
        insert_any_pos(head, pos, n);
    }

    print_normal(head);
    print_reverse(head);
    cout << endl;

    cout << "Head - " << head->val << endl;
    cout << "Tail - " << tail->val << endl;

    return 0;
}
