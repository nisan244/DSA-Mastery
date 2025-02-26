#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;
    stack<int> st_2;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        st_2.push(st.top());
        st.pop();
    }
    while (!st_2.empty())
    {
        cout << st_2.top() << " ";
        st_2.pop();
    }

    return 0;
}
