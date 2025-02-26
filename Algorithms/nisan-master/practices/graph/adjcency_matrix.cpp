#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    int adj[n][n];
    memset(adj, 0, sizeof(adj));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (adj[x][y] == 1)
        {
            cout << "Connection found" << endl;
        }
        else
        {
            cout << "No connection" << endl;
        }
    }

    return 0;
}