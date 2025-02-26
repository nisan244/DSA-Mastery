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

        int arr[n];
        int s = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
        }

        if (s % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int sum = s / 2;
            bool dp[n + 1][sum + 1];
            dp[0][0] = true;
            for (int i = 1; i <= sum; i++)
            {
                dp[0][i] = false;
            }

            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= sum; j++)
                {
                    if (arr[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }

            if (dp[n][sum])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}

// DONE
// Accepted

/*

// INPUT:
3
5
1 2 3 4 5
4
2 3 4 5
5
1 2 3 8 12

// OUTPUT:
NO
YES
YES

*/