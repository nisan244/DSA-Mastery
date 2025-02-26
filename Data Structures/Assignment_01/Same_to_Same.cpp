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

void same_to_same(Node *head, Node *head_2)
{
    Node *temp = head;
    Node *temp_2 = head_2;
    int flag = 1;

    while (temp != NULL && temp_2 != NULL)
    {
        if (temp->val != temp_2->val)
        {
            flag = 0;
            break;
        }
        temp = temp->next;
        temp_2 = temp_2->next;
    }

    if (flag == 1 && temp == NULL && temp_2 == NULL)
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
            break;
        insert_tail(head, tail, val);
    }

    Node *head_2 = NULL;
    Node *tail_2 = NULL;

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head_2, tail_2, val);
    }

    same_to_same(head, head_2);

    return 0;
}

// DONE 
// Accepted