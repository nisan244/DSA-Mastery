#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int len = s.size();
        int new_len = len / 2;

        if (len % 2 == 0 && s.substr(0, new_len) == s.substr(new_len))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// DONE
// Accepted