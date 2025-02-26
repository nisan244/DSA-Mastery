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
            mat[i][j] = 0;
            if (i == j)
            {
                mat[i][j] = 1;
            }
        }
    }

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
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
0 1
1 2
2 3
3 1


OUTPUT:
1 1 0 0
1 1 1 1
0 1 1 1
0 1 1 1

*/