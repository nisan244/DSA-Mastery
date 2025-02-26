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
        vector<int> ar(n);
        int sum = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] % 3 == 1)
            {
                flag = true;
            }
            sum += ar[i];
        }
        if (sum % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (sum % 3 == 2 || flag)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}

// DONE
// Accepted