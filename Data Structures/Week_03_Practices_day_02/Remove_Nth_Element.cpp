// 19. Remove Nth Node From End of List

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

int size_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_form_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= (size_list(temp) - (pos)); i++)
    {
        temp = temp->next;
    }
    Node *delete_Node = temp->next;
    temp->next = temp->next->next;
    delete delete_Node;
}

void delete_head(Node *&head)
{
    Node *delete_Node = head;
    head = head->next;
    delete delete_Node;
}

// void delete_form_position(Node *&head, int pos)
// {
//     if (pos == 1)
//     {
//         Node *delete_Node = head;
//         head = head->next;
//         delete delete_Node;
//     }
//     else
//     {
//         Node *temp = head;
//         for (int i = 1; i <= (size_list(temp) - pos); i++)
//         {
//             temp = temp->next;
//         }
//         Node *delete_Node = temp->next;
//         temp->next = temp->next->next;
//         delete delete_Node;
//     }
// }

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

    int n = 0;

    if (n == size_list(head))
    {
        delete_head(head);
    }
    // else if (n == )
    else if (n <= size_list(head))
    {
        delete_form_position(head, n);
    }

    // if(n <= size_list(head))
    // {
    //     delete_form_position(head, n);
    // }

    print_linked_list(head);

    return 0;
}



//-----------------------------------


// class Solution {
// public:
//     int size_list(ListNode* head)
//     {
//         ListNode* temp = head;
//         int count = 0;
//         while (temp != NULL)
//         {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }

//     void delete_position(ListNode* head, int n)
//     {
//         ListNode* temp = head;
//         int sz = size_list(temp);
//         for (int i = 1; i <= (sz - n); i++)
//         {
//             temp = temp->next;
//         }
//         ListNode* delete_Node = temp->next;
//         temp->next = temp->next->next;
//         delete delete_Node;
//     }
//     void delete_head(ListNode* &head)
//     {
//         ListNode* delete_Node = head;
//         head = head->next;
//         delete delete_Node;
//     }

//     ListNode* removeNthFromEnd(ListNode* head, int n) {

//         if(n == size_list(head))
//         {
//             delete_head(head);
//         }
//         else
//         {
//             delete_position(head, n);
//         }

//         return head;

//     }
// };