// 18-1 0-1 Knapsack

#include <bits/stdc++.h>
using namespace std;
// O(2^N)
int knapsack(int n, int weight[], int value[], int w)
{
    if (n < 0 || w == 0)
    {
        return 0;
    }

    if (weight[n] <= w)
    {
        // duita option
        // Niye dekhbo, Na niye dekhbo
        int op_1 = knapsack(n - 1, weight, value, w - weight[n]) + value[n];
        int op_2 = knapsack(n - 1, weight, value, w);
        return max(op_1, op_2);
    }
    else
    {
        // Ekta option
        // Na niyeii dekhte hobe
        int op_2 = knapsack(n - 1, weight, value, w);
        return op_2;
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

    cout << knapsack(n - 1, weight, velue, w) << endl;

    return 0;
}
