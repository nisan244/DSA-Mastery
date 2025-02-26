// 5-4 Constructor of Node

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
    Node a(10);
    Node b(20);

    a.next = &b;

    cout << a.val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->val << endl;
    cout << b.val << endl;

    return 0;
}
