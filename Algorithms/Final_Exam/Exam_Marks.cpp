// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;

//         int new_marks = 1000 - m;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         bool dp[n + 1][new_marks + 1];
//         dp[0][0] = true;

//         for (int i = 1; i <= new_marks; i++)
//         {
//             dp[0][i] = false;
//         }

//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 0; j <= new_marks; j++)
//             {
//                 if (arr[i - 1] <= j)
//                 {
//                     dp[i][j] = dp[i - 1][j] || dp[i][j - arr[i - 1]];
//                 }
//                 else
//                 {
//                     dp[i][j] = dp[i - 1][j];
//                 }
//             }
//         }

//         if (dp[n][new_marks])
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

//------------------

#include <bits/stdc++.h>
using namespace std;
int dp[1010][1010];

bool knapsack(int n, int arr[], int new_marks)
{
    if (new_marks == 0)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    if (dp[n][new_marks] != -1)
    {
        return dp[n][new_marks];
    }
    if (arr[n - 1] <= new_marks)
    {
        bool op_1 = knapsack(n - 1, arr, new_marks - arr[n - 1]);
        bool op_2 = knapsack(n - 1, arr, new_marks);
        return dp[n][new_marks] = op_1 || op_2;
    }
    else
    {
        return dp[n][new_marks] = knapsack(n - 1, arr, new_marks);
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        int new_marks = 1000 - m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        memset(dp, -1, sizeof(dp));

        if (knapsack(n, arr, new_marks))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// DONE
// Accepted