// 18-6 0-1 Knapsack Bottom Up Implementation

#include <bits/stdc++.h>
using namespace std;
// O(n * w)
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int w;
    cin >> w;
    int dp[n + 1][w + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
        }
    }

    // -------- Bottom Up Approach ---------
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (weight[i - 1] <= j)
            {
                int op_1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                int op_2 = dp[i - 1][j];
                dp[i][j] = max(op_1, op_2);
            }
            else
            {
                int op_2 = dp[i - 1][j];
                dp[i][j] = op_2;
            }
        }
    }

    // -------- OUTPUT -----------
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= w; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << dp[n][w] << endl;

    return 0;
}
