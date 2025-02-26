#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int T;
    cin >> T;
    while (T--)
    {
        stack<char> st;

        string val;
        cin >> val;
        bool flag = true;

        for (char c : val)
        {
            if (c == '0')
            {
                st.push(c);
            }
            else if (c == '1')
            {
                if (!st.empty())
                {
                    st.pop();
                }

                else
                {
                    flag = false;
                    break;
                }
            }
        }

        if (flag == false || !st.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}

// DONE
// Accepted