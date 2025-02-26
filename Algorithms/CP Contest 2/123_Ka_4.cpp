#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sp = n - 2;

    for (int i = 1; i <= n; i++)
    {
        cout << i;
        for (int j = 2; j <= n; j++)
        {
            if (i == 1)
            {
                cout << j;
            }
            else if (i == n)
            {
                cout << n;
            }
        }
        for (int j = 1; j <= sp; j++)
        {
            if (i > 1 && i < n)
            {
                cout << " ";
            }
        }
        if (i > 1 && i < n)
        {
            cout << n;
        }

        cout << "\n";
    }

    return 0;
}

// DONE
// Accepted