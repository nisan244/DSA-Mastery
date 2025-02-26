#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] > 0)
        {
            replace(num.begin(), num.end(), num[i], 1);
        }
        else if (num[i] < 0)
        {
            replace(num.begin(), num.end(), num[i], 2);
        }
        cout << num[i] << " ";
    }

    return 0;
}

// DONE
// Accepted