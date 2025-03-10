// 13 - 3 Adjacency List to Matrix Part - 1

#include <bits/stdc++.h>
using namespace std;

void convert(int n, vector<int> adj[])
{
    int mat[n][n];
    // memset(mat, 0, sizeof(mat));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = 0;
            if (i == j)
            {
                mat[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int child : adj[i])
        {
            mat[i][child] = 1;
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
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    convert(n, v);

    return 0;
}

/*

INPUT:
4 4
1 0
0 2
0 3
2 3


OUTPUT:
1 1 1 1
1 1 0 0
1 0 1 1
1 0 1 1


*/