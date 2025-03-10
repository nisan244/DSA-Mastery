// 13-7 Stack Implement using Doubly Linked List

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

class My_Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val) // O(1)
    {
        sz++;
        Node *New_Node = new Node(val);
        if (head == NULL)
        {
            head = New_Node;
            tail = New_Node;
            return;
        }
        tail->next = New_Node;
        New_Node->prev = tail;
        tail = tail->next;
    }
    void pop() // O(1)
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        delete deleteNode;
    }
    int Top() // O(1)
    {
        return tail->val;
    }
    int size() // O(1)
    {
        return sz;
    }
    bool empty() // O(1)
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{

    My_Stack st;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.Top() << endl;
        st.pop();
    }

    return 0;
}
