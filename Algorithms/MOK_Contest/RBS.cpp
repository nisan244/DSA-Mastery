#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int f_count = 0, s_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                f_count++;
            }
            else
            {
                s_count++;
            }
        }
        // cout << f_count << " " << s_count << endl;
        if (f_count == s_count)
        {
            cout << "Possible"
                 << "\n";
        }
        else
        {
            cout << "Impossible"
                 << "\n";
        }
    }

    return 0;
}

// DONE
// Accepted
