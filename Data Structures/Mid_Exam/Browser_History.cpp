#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string start_text;
    Node *next;
    Node *prev;

    Node(string start_text)
    {
        this->start_text = start_text;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string start_text) // O(1)
{
    Node *New_Node = new Node(start_text);
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

void search_item(Node *&head, string second_text)
{
    Node *temp = head;
    Node *temp_2 = head;

    while (temp != NULL)
    {
        if (temp->start_text == second_text)
        {
            cout << second_text << endl;
            head = temp;
            return;
        }
        temp = temp->next;
    }
    while (temp_2 != NULL)
    {
        if (temp_2->start_text == second_text)
        {
            cout << second_text << endl;
            head = temp_2;
            return;
        }
        temp_2 = temp_2->prev;
    }
    cout << "Not Available" << endl;
}

void next_item(Node *&head)
{
    if (head->next == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }
    head = head->next;
    cout << head->start_text << endl;
}

void prev_item(Node *&head)
{
    if (head->prev == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }
    head = head->prev;
    cout << head->start_text << endl;
}

int main(int argc, char const *argv[])
{
    Node *head = NULL;
    Node *tail = NULL;
    string start_text;
    while (true)
    {
        cin >> start_text;
        if (start_text == "end")
        {
            break;
        }
        insert_tail(head, tail, start_text);
    }

    int q;
    cin >> q;

    while (q--)
    {
        string first_text;
        cin >> first_text;

        if (first_text == "visit")
        {
            string second_text;
            cin >> second_text;
            search_item(head, second_text);
        }
        else if (first_text == "next")
        {
            next_item(head);
        }
        else
        {
            prev_item(head);
        }
    }

    return 0;
}

// DONE
// Accepted