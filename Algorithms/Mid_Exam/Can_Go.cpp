#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[])
{
    ll n, e;
    cin >> n >> e;
    ll arr[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            arr[i][j] = 1e18;
            if (i == j)
            {
                arr[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c < arr[a][b])
        {
            arr[a][b] = c;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (arr[i][k] + arr[k][j] < arr[i][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }

    int src, ts;
    cin >> src >> ts;
    while (ts--)
    {
        int n, m;
        cin >> n >> m;
        if (arr[src][n] <= m)
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