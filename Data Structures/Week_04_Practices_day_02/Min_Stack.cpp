// #include <bits/stdc++.h>
// // Implement class for minStack.
// class minStack
// {
//     // Write your code here.

// public:
//     // Constructor
//     list<int> ls;
//     stack<int> st;
//     int sz = 0;

//     minStack()
//     {
//         // Write your code here.
//     }

//     void push(int num)
//     {
//         sz++;
//         ls.push_back(num);
//         if (st.empty() || num <= st.top())
//         {
//             st.push(num);
//         }
//     }

//     int pop()
//     {
//         if (sz == 0)
//         {
//             return -1;
//         }
//         else
//         {
//             sz--;
//             if (ls.back() == st.top())
//             {
//                 st.pop();
//             }
//             int new_val = ls.back();
//             ls.pop_back();
//             return new_val;
//         }
//     }

//     int top()
//     {
//         if (sz == 0)
//         {
//             return -1;
//         }
//         else
//         {
//             return ls.back();
//         }
//     }

//     int getMin()
//     {
//         if (sz == 0)
//         {
//             return -1;
//         }
//         else
//         {
//             return st.top();
//         }
//     }
// };

//-------------------------------------

#include <bits/stdc++.h>
// Implement class for minStack.
class minStack
{
public:
    // Constructor
    stack<int> st_1;
    stack<int> st_2;
    int sz = 0;

    minStack()
    {
        // Write your code here.
    }

    void push(int num)
    {
        sz++;
        st_1.push(num);
        if (st_2.empty() || num <= st_2.top())
        {
            st_2.push(num);
        }
    }

    int pop()
    {
        if (sz == 0)
        {
            return -1;
        }
        else
        {
            sz--;
            if (st_1.top() == st_2.top())
            {
                st_2.pop();
            }
            int new_val = st_1.top();
            st_1.pop();
            return new_val;
        }
    }

    int top()
    {
        if (sz == 0)
        {
            return -1;
        }
        else
        {
            return st_1.top();
        }
    }

    int getMin()
    {
        if (sz == 0)
        {
            return -1;
        }
        else
        {
            return st_2.top();
        }
    }
};