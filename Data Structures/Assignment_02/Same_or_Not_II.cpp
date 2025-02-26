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
    int top() // O(1)
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

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
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
    myQueue q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }

    bool flag = true;
    if (n != m)
    {
        flag = false;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// DONE
// Accepted
