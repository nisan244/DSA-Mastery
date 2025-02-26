// 5-5 Dynamic Node

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

int main(int argc, char const *argv[])
{   
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);


    head->next = a;

    cout << head->val << endl;
    cout << a->val << endl;
    cout << head->next->val << endl;



    return 0;
}
