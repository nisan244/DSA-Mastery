#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;

        int sum = 0;

        for (char c : n)
        {
            sum += c - '0';
        }
        if (sum % 3 == 0)
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
// Acccepted