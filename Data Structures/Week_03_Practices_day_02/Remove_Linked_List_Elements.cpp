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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_Elements(Node *&head, int val)
{
    Node *temp = head;

    // while (head != NULL && head->val == val)
    // {
    //     head = head->next;
    // }
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->next->val == val)
        {
            Node *delete_node = temp->next;
            temp->next = delete_node->next;
            delete delete_node;
        }
        if (temp->next == NULL)
        {
            break;
        }
        else if (temp->next->val != val)
        {
            temp = temp->next;
        }
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

    remove_Elements(head, 9);
    print_linked_list(head);

    return 0;
}

//------------------------------------

// class Solution {
// public:
//     ListNode* removeElements(ListNode* &head, int val) {
//         ListNode* temp = head;
//         while(head != NULL && head->val == val)
//         {
//             head = head->next;
//         }
//         while(temp != NULL && temp->next != NULL)
//         {
//             if(temp->next->val == val)
//             {
//                 temp->next = temp->next->next;
//             }
//             if(temp->next == NULL)
//             {
//                 break;
//             }
//             else if(temp->next->val != val)
//             {
//                 temp = temp->next;
//             }
//         }
//         return head;

//     }
// };
