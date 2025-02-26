#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;
    queue<int> qu;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        qu.push(y);
    }
    bool flag = true;
    if (n != m)
    {
        flag = false;
    }
    else
    {
        while (!st.empty())
        {
            if (st.top() != qu.front())
            {
                flag = false;
                break;
            }
            st.pop();
            qu.pop();
        }
    }
    if (!flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
