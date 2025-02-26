// 13-4 Adjacency List to Matrix Part-2

#include <bits/stdc++.h>
using namespace std;

void convert(int n, vector<pair<int, int>> adj[])
{
    int mat[n][n];
    // memset(mat, 0, sizeof(mat));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = -1;
            if (i == j)
            {
                mat[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> child : adj[i])
        {
            int child_Node = child.first;
            int cost = child.second;
            mat[i][child_Node] = cost;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }
    convert(n, v);

    return 0;
}

/*

INPUT:
4 5
1 0 5
0 2 6
3 0 8
2 3 7
3 2 7

OUTPUT:
0 -1 6 -1
5 0 -1 -1
-1 -1 0 7
8 -1 7 0

*/