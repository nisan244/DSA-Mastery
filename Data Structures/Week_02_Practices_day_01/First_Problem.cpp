// Question: Take a singly linked list as input and print the size of the linked list.

// input: 2 1 5 3 4 8 9 -1    Output : 7
// input: 5 1 4 5 -1          Output : 4



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

void insert_tail(Node *&head, Node *&tail, int val) // O(1)
{
    Node *New_Node = new Node(val);
    if (tail == NULL)
    {
        head = New_Node;
        tail = New_Node;
        return;
    }
    tail->next = New_Node;
    New_Node->prev = tail;
    tail = tail->next;
}

void solve(Node *head, Node *head1)
{
    Node *temp = head;
    Node *temp2 = head1;
    int flag = 1;
    while (temp != NULL && temp2 != NULL)
    {
        if (temp->val != temp2->val)
        {
            flag = 0;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    if (flag == 1 && temp == NULL && temp2 == NULL)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val1;
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(head1, tail1, val1);
    }

    solve(head, head1);
    return 0;
}

// DONE