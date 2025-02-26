#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    set<int> st;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int y;
            cin >> y;
            st.insert(y);
        }
        else if (x == 2)
        {
            if (!st.empty())
            {
                auto it = st.begin();
                cout << *it << "\n";
                st.erase(it);
            }
            else
            {
                cout << "empty" << "\n";
            }
        }
    }

    return 0;
}

// DONE
// Accepted