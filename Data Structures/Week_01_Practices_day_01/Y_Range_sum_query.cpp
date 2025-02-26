#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n, q;
    cin >> n >> q;

    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    //---- Prefix Sum ------------

    long long int pre[n];
    pre[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = ar[i] + pre[i - 1];
    }

    while (q--)
    {
        long long int L, R;
        cin >> L >> R;
        L--;
        R--;
        long long int sum;
        if (L == 0)
        {
            sum = pre[R]; // sum = pre[R] - 0;
        }
        else
        {
            sum = pre[R] - pre[L - 1];
        }
        cout << sum << endl;
    }

    return 0;
}

// DONE
// Accepted
