#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    queue<int> new_q;
    stack<int> s;

    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        new_q.push(s.top());
        s.pop();
    }

    while (!q.empty())
    {
        new_q.push(q.front());
        q.pop();
    }
    return new_q;
}
