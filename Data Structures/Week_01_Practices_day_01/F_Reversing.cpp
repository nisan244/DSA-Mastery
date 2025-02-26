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
    reverse(num.begin(), num.end());

    for (int val : num)
    {
        cout << val << " ";
    }

    return 0;
}

// DONE
// Accepted