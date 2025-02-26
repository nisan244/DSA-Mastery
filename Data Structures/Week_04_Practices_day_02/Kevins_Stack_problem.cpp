#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    // Write your code here.
    stack<char> st;

    for (char c : s)
    {
        st.push(c);
    }

    string new_string;
    while (!st.empty())
    {
        new_string += st.top();
        st.pop();
    }

    return new_string;
}
