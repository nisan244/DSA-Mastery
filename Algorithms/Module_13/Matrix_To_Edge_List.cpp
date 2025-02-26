// 13-8 Matrix to Edge List Unweighted

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    vector<pair<int, int>> edge_List;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j] == 1 && i != j)
            {
                edge_List.push_back({i, j});
            }
        }
        
    }

    for (pair<int, int> edge : edge_List)
    {
        cout << edge.first << " " << edge.second << endl;
    }

        return 0;
}

/*

INPUT:
4
1 1 0 0
0 1 1 0
0 0 1 1
0 1 1 1

OUTPUT:
0 1
1 2
2 3
3 1
3 2

*/