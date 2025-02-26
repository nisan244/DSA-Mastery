#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> myQueue;
    stack<int> myStack;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int qu;
        cin >> qu;
        myQueue.push(qu);
    }
    while (!myQueue.empty())
    {
        myStack.push(myQueue.front());
        myQueue.pop();
    }
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}
