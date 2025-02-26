// Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

// input: 2 4 6 8 10 -1    Output : 6
// input: 1 2 3 4 5 6 -1   Output : 3 4



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

void palindrome_chack(Node *head, Node *tail)
{
    Node *temp = head;
    Node *temp_2 = tail;
    bool flag = true;

    while (temp != NULL && temp_2 != NULL)
    {
        if (temp->val != temp_2->val)
        {
            flag = false;
            break;
        }
        temp = temp->next;
        temp_2 = temp_2->prev;
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

    palindrome_chack(head, tail);

    return 0;
}

// DONE