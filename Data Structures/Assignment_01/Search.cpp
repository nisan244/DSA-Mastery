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

void search(Node *head, int x)
{
    Node *temp = head;
    int pos = 0;
    bool flag = false;
    while (temp != NULL)
    {
        if (x == temp->val)
        {
            flag = true;
            break;
        }
        pos++;
        temp = temp->next;
    }

    if (flag == true)
    {
        cout << pos << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;

    while (t--)
    {
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }

        int x;
        cin >> x;
        search(head, x);

        head = NULL;
        tail = NULL;
    }

    return 0;
}


// DONE
// Accepted