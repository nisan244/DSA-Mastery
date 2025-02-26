#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s2;
    while (cin >> s >> s2)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s2[count])
            {
                count++;
            }
        }
        if (count == s2.size())
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