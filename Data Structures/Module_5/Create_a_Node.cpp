// 5-3 Create a Node

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main(int argc, char const *argv[])
{
    Node a, b;

    a.val = 10;
    b.val = 20;

    a.next = &b;
    b.next = NULL;

    cout << a.val << endl;
    cout << (*a.next).val << endl;
    cout << a.next->val << endl;
    cout << b.val << endl;

    return 0;
}

//----------------------------

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *next;
// };

// int main(int argc, char const *argv[])
// {
//     Node a, b;

//     a.val = 10;
//     b.val = 20;

//     a.next = &b;
//     b.next = NULL;

//     cout << a.val << " " << b.val << " " << a.next->val << endl;

//     return 0;
// }
