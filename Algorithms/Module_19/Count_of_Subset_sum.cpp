// // 19-3 Count of Subset Sum Using Top Down

// #include <bits/stdc++.h>
// using namespace std;

// int dp[1010][1010];
// int subset_sum(int n, int ar[], int s)
// {
//     if (n == 0)
//     {
//         if (s == 0)
//             return 1;
//         else
//             return 0;
//     }

//     if (dp[n][s] != -1)
//         return dp[n][s];

//     if (ar[n - 1] <= s)
//     {
//         int op_1 = subset_sum(n - 1, ar, s - ar[n - 1]);
//         int op_2 = subset_sum(n - 1, ar, s);
//         return dp[n][s] = op_1 + op_2;
//     }
//     else
//     {
//         return dp[n][s] = subset_sum(n - 1, ar, s);
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ar[i];
//     }
//     int s;
//     cin >> s;
//     memset(dp, -1, sizeof(dp));

//     cout << subset_sum(n, ar, s) << endl;

//     return 0;
// }

//---------------------------------------------------------------

// 19-3 Count of Subset Sum Using Bottom Up

#include <bits/stdc++.h>
using namespace std;

int dp[1010][1010];
int subset_sum(int n, int ar[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }

    if (dp[n][s] != -1)
        return dp[n][s];

    if (ar[n - 1] <= s)
    {
        int op_1 = subset_sum(n - 1, ar, s - ar[n - 1]);
        int op_2 = subset_sum(n - 1, ar, s);
        return dp[n][s] = op_1 + op_2;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, ar, s);
    }
}

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
    memset(dp, -1, sizeof(dp));

    dp[0][0] = 1;

    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
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
                dp[i][j] = dp[i - 1][j - ar[i - 1]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
