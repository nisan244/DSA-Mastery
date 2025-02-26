#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;
    int s = n - 1;
    int k = n - 2;
    for (int i = 2; i < n; i++)
    {
        cout << i;
        for (int i = 1; i <= n-2; i++)
        {
            cout << " ";
        }
        cout << s << endl;
        s--;
    }
    if (n != 1)
    {
        for (int i = n; i >= 1; i--)
        {
            cout << i;
        }
    }

    return 0;
}

// DONE
// Accepted