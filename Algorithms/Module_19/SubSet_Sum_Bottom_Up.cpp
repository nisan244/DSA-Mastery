// 19-2 Subset Sum Bottom Up

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int s;
    cin >> s;

    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (ar[i - 1] <= j)
            {
                // bool op_1 = dp[i - 1][j - ar[i - 1]];
                // bool op_2 = dp[i - 1][j];
                // dp[i][j] = op_1 || op_2;
                // ---- Same Aproch -----
                dp[i][j] = dp[i - 1][j - ar[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // if(dp[n][s])
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (dp[i][j])
            {
                cout << "T" << " ";
            }
            else
            {
                cout << "F" << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
