// 13-4 Stack Implement using Array I

#include <bits/stdc++.h>
using namespace std;

class My_Stack
{
public:
    vector<int> v;
    void push(int val) // O(1)
    {
        v.push_back(val);
    }
    void pop() // O(1)
    {
        v.pop_back();
    }
    int Top() // O(1)
    {
        return v.back();
    }
    int size() // O(1)
    {
        return v.size();
    }
    bool empty() // O(1)
    {
        if (v.size() == 0)
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

    while (st.empty() == false)    // while (st.empty() == false) /// while (!st.empty())
    {
        cout << st.Top() << endl;
        st.pop();
    }
    
    




    // st.push(10);
    // st.push(20);
    // st.push(30);

    // if(st.empty() == false)
    // {
    //     cout << st.Top() << endl;
    // }

    // cout << st.Top() << endl;
    // st.pop();
    // cout << st.Top() << endl;
    // st.pop();
    // cout << st.Top() << endl;
    // st.pop();
    // cout << st.Top() << endl;

    return 0;
}
