// 13-6 Matrix to Adjacency List

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int mat[n][n];
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1 && i != j)
            {
                v[i].push_back(j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (int child : v[i])
        {
            cout << child << ", ";
        }
        cout << endl;
    }

    return 0;
}

/*

INPUT:
4
0 1 0 0
0 0 1 0
0 0 0 1
0 1 1 0

OUTPUT:
0 -> 1,
1 -> 2,
2 -> 3,
3 -> 1, 2,

-------------------------

INPUT:
4
1 1 0 0
0 1 1 0
0 0 1 1
0 1 1 1

OUTPUT:
0 -> 1,
1 -> 2,
2 -> 3,
3 -> 1, 2,

*/