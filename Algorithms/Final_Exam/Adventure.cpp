#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        vector<int> arr_w(n), arr_v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr_w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr_v[i];
        }

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

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (arr_w[i - 1] <= j)
                {
                    dp[i][j] = max(arr_v[i - 1] + dp[i - 1][j - arr_w[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        cout << dp[n][w] << endl;
    }

    return 0;
}


// DONE 
// Accepted