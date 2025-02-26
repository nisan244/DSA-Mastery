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

void find_defarance(Node *head)
{
    Node *temp = head;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (Node *i = temp; i != NULL; i = i->next)
    {
        if (i->val > max_val)
        {
            max_val = i->val;
        }
        if (i->val < min_val)
        {
            min_val = i->val;
        }
    }
    cout << max_val - min_val << endl;
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

    find_defarance(head);

    return 0;
}


// DONE
// Accepted