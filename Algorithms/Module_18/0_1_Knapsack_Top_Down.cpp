// 18-4 0-1 Knapsack Top Down Approach

#include <bits/stdc++.h>
using namespace std;
const int Max_N = 1000;
const int Max_W = 1000;
int dp[Max_N][Max_W];
// O(n * w)
int knapsack(int n, int weight[], int value[], int w)
{
    if (n == 0 || w == 0)
    {
        return 0;
    }
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }

    if (weight[n - 1] <= w)
    {
        // duita option
        // Niye dekhbo, Na niye dekhbo
        int op_1 = knapsack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        int op_2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = max(op_1, op_2);
    }
    else
    {
        // Ekta option
        // Na niyeii dekhte hobe
        int op_2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = op_2;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int weight[n], velue[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> velue[i];
    }
    int w;
    cin >> w;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, weight, velue, w) << endl;

    return 0;
}
