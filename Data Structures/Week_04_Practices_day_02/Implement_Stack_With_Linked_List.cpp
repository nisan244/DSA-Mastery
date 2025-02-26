/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    // Write your code here

public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        // Write your code here
        return sz;
    }

    bool isEmpty()
    {
        // Write your code here
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int data)
    {
        // Write your code here
        sz++;
        Node *New_Node = new Node(data);
        if (head == NULL)
        {
            head = New_Node;
            tail = New_Node;
            return;
        }
        tail->next = New_Node;
        tail = tail->next;
    }

    void pop()
    {
        // Write your code here
        if (sz == 0)
        {
            return;
        }
        sz--;
        Node *deleteNode = tail;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
        }
        delete deleteNode;
    }

    int getTop()
    {
        // Write your code here
        if (tail == NULL)
        {
            return -1;
        }
        return tail->data;
    }
};