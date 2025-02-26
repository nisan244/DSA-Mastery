// 13-5 Edge List to Matrix

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, e;
    cin >> n >> e;
    int mat[n][n];
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

    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        mat[a][b] = w;
        mat[b][a] = w;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

INPUT:
4 4
0 1 10
1 2 12
2 3 20
3 1 15

OUTPUT:
0 10 -1 -1
10 0 12 15
-1 12 0 20
-1 15 20 0

*/