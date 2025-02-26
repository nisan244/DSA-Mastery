#include <bits/stdc++.h>

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    Queue()
    {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        sz++;
        Node *new_Node = new Node(data);
        if (head == NULL)
        {
            head = new_Node;
            tail = new_Node;
            return;
        }
        tail->next = new_Node;
        tail = tail->next;
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (sz == 0)
        {
            return -1;
        }
        sz--;
        Node *deleteNode = head;
        head = head->next;
        int delte_val = deleteNode->data;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
        return delte_val;
    }

    int front()
    {
        // Implement the front() function
        if (head == NULL)
        {
            return -1;
        }
        return head->data;
    }
};