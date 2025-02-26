#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        // for undirected graph
        // mat[a][b] = 1;
        // mat[b][a] = 1;

        // for directed graph
        mat[a][b] = 1;
    }
    if (mat[2][4] == 1)
    {
        cout << "Connection ase" << endl;
    }
    else
    {
        cout << "Connection nai" << endl;
    }


    return 0;
}