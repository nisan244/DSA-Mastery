#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int count[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            cin >> s;
            for (char c : s)
            {
                if (c == 'A')
                    count[0]++;
                else if (c == 'B')
                    count[1]++;
                else if (c == 'C')
                    count[2]++;
            }
        }
        if (count[0] == 2)
        {
            cout << "A" << endl;
        }
        else if (count[1] == 2)
        {
            cout << "B" << endl;
        }
        else
        {
            cout << "C" << endl;
        }
    }

    return 0;
}

// DONE
// Accepted