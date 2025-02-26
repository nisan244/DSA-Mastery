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

void remove_duplicate(Node *head)
{
    Node *temp = head;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        Node *temp_2 = i;
        while (temp_2->next != NULL)
        {
            if (i->val == temp_2->next->val)
            {
                Node *delete_temp = temp_2->next;
                temp_2->next = temp_2->next->next;
                delete delete_temp;
            }
            else
            {
                temp_2 = temp_2->next;
            }
        }
        cout << i->val << " ";
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

    remove_duplicate(head);

    return 0;
}

// DONE
// Accepted

//---------------------------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;

//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_tail(Node *&head, Node *&tail, int val) // O(1)
// {
//     Node *New_Node = new Node(val);
//     if (head == NULL)
//     {
//         head = New_Node;
//         tail = New_Node;
//         return;
//     }
//     tail->next = New_Node;
//     tail = New_Node;
// }

// void remove_duplicate(Node *head)
// {
//     Node *temp = head;
//     bool flag = false;

//     for (Node *i = temp; i != NULL; i = i->next)
//     {
//         Node *temp_2 = i;
//         while (temp_2->next != NULL)
//         {
//             if (i->val == temp_2->next->val)
//             {
//                 flag = true;
//                 break;
//             }
//             else
//             {
//                 temp_2 = temp_2->next;
//             }
//         }
//     }
//     if (flag == true)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int val;
//     while (true)
//     {
//         cin >> val;
//         if (val == -1)
//             break;
//         insert_tail(head, tail, val);
//     }

//     remove_duplicate(head);

//     return 0;
// }

// // DONE
// // Accepted
