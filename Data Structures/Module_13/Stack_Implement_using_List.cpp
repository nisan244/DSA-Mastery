// 13-6 Stack Implement using List

#include <bits/stdc++.h>
using namespace std;

class My_Stack
{
public:
    list<int> l;
    void push(int val) // O(1)
    {
        l.push_back(val);
    }
    void pop() // O(1)
    {
        l.pop_back();
    }
    int Top() // O(1)
    {
        return l.back();
    }
    int size() // O(1)
    {
        return l.size();
    }
    bool empty() // O(1)
    {
        if (l.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{
    My_Stack st;

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
        cout << st.Top() << endl;
        st.pop();
    }

    return 0;
}
