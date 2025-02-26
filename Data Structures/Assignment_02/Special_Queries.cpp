#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<string> Qu;

    int T;
    cin >> T;

    while (T--)
    {
        int v;
        cin >> v;
        if (v == 0)
        {
            string name;
            cin >> name;
            Qu.push(name);
        }
        else if (v == 1)
        {
            if (Qu.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                string result = Qu.front();
                Qu.pop();
                cout << result << endl;
            }
        }
    }

    return 0;
}

// DONE
// Accepted