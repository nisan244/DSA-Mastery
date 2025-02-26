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

void Palindrome(Node *head, Node *tail)
{
    Node *temp_head = head;
    Node *temp_tail = tail;
    bool flag = true;

    while (temp_head != NULL && temp_tail != NULL)
    {
        if (temp_head->val != temp_tail->val)
        {
            flag = false;
            break;
        }
        temp_head = temp_head->next;
        temp_tail = temp_tail->prev;
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
        {
            break;
        }
        insert_tail(head, tail, val);
    }

    Palindrome(head, tail);
    // print_normal(head);
    // print_reverse(tail);

    return 0;
}

// DONE
// Accepted