// 13-6 Matrix to Adjacency List 

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int mat[n][n];
    vector<pair<int, int>> v[n];
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
            if (mat[i][j] > 0)
            {
                v[i].push_back({j, mat[i][j]});
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (pair<int, int> child : v[i])
        {
            cout << "{" << child.first << ", " << child.second << "} ";
        }
        cout << endl;
    }

    return 0;
}

/*

INPUT:
4
0 5 -1 -1
-1 0 6 -1
-1 -1 0 7
-1 8 7 0


OUTPUT:
0 -> {1, 5}
1 -> {2, 6}
2 -> {3, 7}
3 -> {1, 8} {2, 7}

*/