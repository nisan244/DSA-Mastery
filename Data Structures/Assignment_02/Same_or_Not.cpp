#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q.push(y);
    }
    bool flag = true;
    if (n != m)
    {
        flag = false;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// DONE
// Accepted